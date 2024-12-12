import pygame
import random

# Initialize Pygame
pygame.init()

# Constants
WIDTH, HEIGHT = 300, 600
BLOCK_SIZE = 30
GRID_WIDTH = WIDTH // BLOCK_SIZE
GRID_HEIGHT = HEIGHT // BLOCK_SIZE
FPS = 5

# Colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)

# Screen setup
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Tetris")
clock = pygame.time.Clock()

# Tetromino shapes
shapes = [
    [[1, 1, 1, 1]],
    [[1, 1, 1], [0, 0, 1]],
    [[1, 1, 1], [1, 0, 0]],
    [[1, 1], [1, 1]],
    [[0, 1, 1], [1, 1, 0]],
    [[1, 1, 1], [0, 1, 0]],
    [[1, 1, 0], [0, 1, 1]],
]

shape_colors = [
    (0, 255, 255),
    (0, 0, 255),
    (255, 165, 0),
    (255, 255, 0),
    (0, 255, 0),
    (128, 0, 128),
    (255, 0, 0),
]

# Game board
grid = [[0 for _ in range(GRID_WIDTH)] for _ in range(GRID_HEIGHT)]

class Piece:
    def __init__(self, x, y, shape):
        self.x = x
        self.y = y
        self.shape = shape
        self.color = shape_colors[shapes.index(shape)]
        self.rotation = 0

    def rotate(self):
        original_x, original_y = self.x, self.y
        original_rotation = self.rotation
        self.rotation = (self.rotation + 1) % len(self.shape)
        rotated_shape = self.get_rotated_shape()

        offsets = [(0, 0), (1, 0), (-1, 0), (0, -1), (0, 1)]  # Wall kick offsets
        for dx, dy in offsets:
            self.x = original_x + dx
            self.y = original_y + dy
            if not self.check_collision(rotated_shape):
                self.shape = rotated_shape
                return

        self.x = original_x  # Revert position
        self.y = original_y
        self.rotation = original_rotation

    def get_rotated_shape(self):
        return [
            [self.shape[y][x] for y in range(len(self.shape))]
            for x in range(len(self.shape[0]) - 1, -1, -1)
        ]

    def check_collision(self, shape, x_offset=0, y_offset=0):
        for y, row in enumerate(shape):
            for x, cell in enumerate(row):
                if cell:
                    new_x = self.x + x + x_offset
                    new_y = self.y + y + y_offset

                    if new_x < 0 or new_x >= GRID_WIDTH or new_y >= GRID_HEIGHT:
                        return True
                    if new_y >= 0 and grid[new_y][new_x]:
                        return True
        return False

def draw_grid():
    for y in range(GRID_HEIGHT):
        for x in range(GRID_WIDTH):
            if grid[y][x]:
                color = shape_colors[grid[y][x] - 1]
                pygame.draw.rect(screen, color, (x * BLOCK_SIZE, y * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE))
                pygame.draw.rect(screen, BLACK, (x * BLOCK_SIZE, y * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE), 1)

def draw_piece(piece):
    for y, row in enumerate(piece.shape):
        for x, cell in enumerate(row):
            if cell:
                pygame.draw.rect(screen, piece.color,
                                 ((piece.x + x) * BLOCK_SIZE, (piece.y + y) * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE))
                pygame.draw.rect(screen, BLACK,
                                 ((piece.x + x) * BLOCK_SIZE, (piece.y + y) * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE), 1)

def clear_lines():
    lines_cleared = 0
    y = GRID_HEIGHT - 1
    while y >= 0:
        if all(grid[y]):
            lines_cleared += 1
            del grid[y]
            grid.insert(0, [0 for _ in range(GRID_WIDTH)])
        else:
            y -= 1
    return lines_cleared

def main():
    current_piece = Piece(GRID_WIDTH // 2, 0, random.choice(shapes))
    fall_time = 0
    fall_speed = 0.5
    score = 0
    running = True

    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    if not current_piece.check_collision(current_piece.shape, x_offset=-1):
                        current_piece.x -= 1
                if event.key == pygame.K_RIGHT:
                    if not current_piece.check_collision(current_piece.shape, x_offset=1):
                        current_piece.x += 1
                if event.key == pygame.K_DOWN:
                    fall_speed = 0.1
                if event.key == pygame.K_UP:
                    current_piece.rotate()

        if event.type == pygame.KEYUP:
            if event.key == pygame.K_DOWN:
                fall_speed = 0.5

        fall_time += clock.get_rawtime() / 1000
        if fall_time > fall_speed:
            fall_time = 0
            if not current_piece.check_collision(current_piece.shape, y_offset=1):
                current_piece.y += 1
            else:
                # Place piece on grid
                for y, row in enumerate(current_piece.shape):
                    for x, cell in enumerate(row):
                        if cell:
                            grid[current_piece.y + y][current_piece.x + x] = shapes.index(current_piece.shape) + 1

                lines = clear_lines()
                score += lines * 10

                # Check for game over
                new_piece = Piece(GRID_WIDTH // 2, 0, random.choice(shapes))
                if new_piece.check_collision(new_piece.shape):
                    print("Game Over! Score:", score)
                    running = False
                else:
                    current_piece = new_piece

        screen.fill(BLACK)
        draw_grid()
        draw_piece(current_piece)
        pygame.display.flip()
        clock.tick(FPS)

    pygame.quit()

if __name__ == "__main__":
    main()