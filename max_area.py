import pygame
import random

# Initialize Pygame
pygame.init()

# Constants
SCREEN_WIDTH = 300
SCREEN_HEIGHT = 600
BLOCK_SIZE = 30
BOARD_WIDTH = SCREEN_WIDTH // BLOCK_SIZE
BOARD_HEIGHT = SCREEN_HEIGHT // BLOCK_SIZE

# Colors
BLACK = (0, 0, 0)
WHITE = (255, 255, 255)
RED = (255, 0, 0)
GREEN = (0, 255, 0)
BLUE = (0, 0, 255)

# Shapes
SHAPES = [
    [[1, 1, 1, 1]],  # I
    [[1, 1, 1], [0, 1, 0]],  # T
    [[1, 1], [1, 1]],  # O
    [[1, 1, 0], [0, 1, 1]],  # S
    [[0, 1, 1], [1, 1, 0]],  # Z
    [[1, 1, 1], [1, 0, 0]],  # L
    [[1, 1, 1], [0, 0, 1]],  # J
]

class Tetris:
    def __init__(self):
        self.board = [[0] * BOARD_WIDTH for _ in range(BOARD_HEIGHT)]
        self.current_shape = self.new_shape()
        self.current_x = BOARD_WIDTH // 2 - len(self.current_shape[0]) // 2
        self.current_y = 0
        self.score = 0

    def new_shape(self):
        return random.choice(SHAPES)

    def rotate_shape(self):
        self.current_shape = [list(row) for row in zip(*self.current_shape[::-1])]

    def valid_position(self, shape, offset_x=0, offset_y=0):
        for y, row in enumerate(shape):
            for x, cell in enumerate(row):
                if cell:
                    new_x = x + self.current_x + offset_x
                    new_y = y + self.current_y + offset_y
                    if new_x < 0 or new_x >= BOARD_WIDTH or new_y >= BOARD_HEIGHT:
                        return False
                    if new_y >= 0 and self.board[new_y][new_x]:
                        return False
        return True

    def merge_shape(self):
        for y, row in enumerate(self.current_shape):
            for x, cell in enumerate(row):
                if cell:
                    self.board[self.current_y + y][self.current_x + x] = 1

    def clear_lines(self):
        lines_to_clear = [i for i, row in enumerate(self.board) if all(row)]
        for i in lines_to_clear:
            del self.board[i]
            self.board.insert(0, [0] * BOARD_WIDTH)
            self.score += 100

    def drop_shape(self):
        if self.valid_position(self.current_shape, 0, 1):
            self.current_y += 1
        else:
            self.merge_shape()
            self.clear_lines()
            self.current_shape = self.new_shape()
            self.current_x = BOARD_WIDTH // 2 - len(self.current_shape[0]) // 2
            self.current_y = 0
            if not self.valid_position(self.current_shape):
                self.reset_game()

    def reset_game(self):
        self.board = [[0] * BOARD_WIDTH for _ in range(BOARD_HEIGHT)]
        self.score = 0

    def draw_board(self, screen):
        for y, row in enumerate(self.board):
            for x, cell in enumerate(row):
                if cell:
                    pygame.draw.rect(screen, WHITE, (x * BLOCK_SIZE, y * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE))

        for y, row in enumerate(self.current_shape):
            for x, cell in enumerate(row):
                if cell:
                    pygame.draw.rect(screen, BLUE, ((self.current_x + x) * BLOCK_SIZE, (self.current_y + y) * BLOCK_SIZE, BLOCK_SIZE, BLOCK_SIZE))

    def draw_score(self, screen):
        font = pygame.font.Font(None, 36)
        score_text = font.render(f'Score: {self.score}', True, WHITE)
        screen.blit(score_text, (10, 10))

def draw_button(screen, text, x, y, width, height, color, hover_color):
    mouse = pygame.mouse.get_pos()
    click = pygame.mouse.get_pressed()
    
    if x < mouse[0] < x + width and y < mouse[1] < y + height:
        pygame.draw.rect(screen, hover_color, (x, y, width, height))
        if click[0] == 1:  # Left mouse button is clicked
            return True
    else:
        pygame.draw.rect(screen, color, (x, y, width, height))
    
    font = pygame.font.Font(None, 36)
    text_surface = font.render(text, True, WHITE)
    screen.blit(text_surface, (x + (width - text_surface.get_width()) // 2, y + (height - text_surface.get_height()) // 2))
    return False

def main():
    screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
    pygame.display.set_caption("Tetris")
    clock = pygame.time.Clock()
    game = None
    fall_time = 0
    fall_speed = 500  # milliseconds

    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                return

        screen.fill(BLACK)

        if game is None:  # Show menu
            if draw_button(screen, "Start Game", 50, 250, 200, 50, GREEN, (0, 200, 0)):
                game = Tetris()  # Start a new game
            if draw_button(screen, "Quit", 50, 320, 200, 50, RED, (200, 0, 0)):
                pygame.quit()
                return
        else:  # Game loop
            fall_time += clock.get_time()
            if fall_time >= fall_speed:
                game.drop_shape()
                fall_time = 0

            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    return
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_LEFT and game.valid_position(game.current_shape, -1):
                        game.current_x -= 1
                    if event.key == pygame.K_RIGHT and game.valid_position(game.current_shape, 1):
                        game.current_x += 1
                    if event.key == pygame.K_DOWN:
                        game.drop_shape()
                    if event.key == pygame.K_UP:
                        game.rotate_shape()
                        if not game.valid_position(game.current_shape):
                            game.rotate_shape()  # Rotate back if invalid

            game.draw_board(screen)
            game.draw_score(screen)  # Draw the score on the screen

            if draw_button(screen, "Quit", 50, 500, 200, 50, RED, (200, 0, 0)):
                pygame.quit()
                return

        pygame.display.flip()
        clock.tick(60)

if __name__ == "__main__":
    main()