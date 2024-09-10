#include <ncurses.h>
#include <cstdlib>
#include <ctime>
#include <vector>

enum Direction { UP, DOWN, LEFT, RIGHT };

struct Point {
    int x, y;
};

class SnakeGame {
private:
    int height, width;
    Point food;
    std::vector<Point> snake;
    Direction dir;
    bool gameOver;

    void generateFood() {
        food.x = rand() % (width - 2) + 1;
        food.y = rand() % (height - 2) + 1;
    }

    void move() {
        Point newHead = snake.front();
        switch (dir) {
            case UP: newHead.y--; break;
            case DOWN: newHead.y++; break;
            case LEFT: newHead.x--; break;
            case RIGHT: newHead.x++; break;
        }
        snake.insert(snake.begin(), newHead);

        if (newHead.x == food.x && newHead.y == food.y) {
            generateFood();
        } else {
            snake.pop_back();
        }

        if (newHead.x == 0 || newHead.x == width - 1 || 
            newHead.y == 0 || newHead.y == height - 1) {
            gameOver = true;
        }
    }

public:
    SnakeGame(int h, int w) : height(h), width(w), gameOver(false) {
        srand(time(0));
        snake.push_back({width / 2, height / 2});
        dir = RIGHT;
        generateFood();
    }

    void run() {
        initscr();
        cbreak();
        noecho();
        keypad(stdscr, TRUE);
        timeout(100);
        
        while (!gameOver) {
            clear();
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                        mvaddch(i, j, '#');
                    }
                }
            }
            mvaddch(food.y, food.x, '*');
            for (const auto& p : snake) {
                mvaddch(p.y, p.x, 'O');
            }
            refresh();

            int ch = getch();
            switch (ch) {
                case KEY_UP: if (dir != DOWN) dir = UP; break;
                case KEY_DOWN: if (dir != UP) dir = DOWN; break;
                case KEY_LEFT: if (dir != RIGHT) dir = LEFT; break;
                case KEY_RIGHT: if (dir != LEFT) dir = RIGHT; break;
                case 'q': gameOver = true; break;
            }
            move();
        }
        endwin();
    }
};

int main() {
    SnakeGame game(20, 40);
    game.run();
    return 0;
}