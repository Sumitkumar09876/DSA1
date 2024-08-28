#include <iostream>
#include <vector>
#include <string>
#include <cctype>
class ChessGame {
private:
    std::vector<std::vector<char>> board;
    bool whiteTurn;

    void initializeBoard() {
        board = {
            {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
            {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
            {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
        }; 
    }

    void printBoard() {
        std::cout << "  a b c d e f g h\n";
        for (int i = 0; i < 8; ++i) {
            std::cout << 8 - i << " ";
            for (int j = 0; j < 8; ++j) {
                std::cout << board[i][j] << " ";
            }
            std::cout << 8 - i << "\n";
        }
        std::cout << "  a b c d e f g h\n";
    }

    bool isValidMove(int fromRow, int fromCol, int toRow, int toCol) {
        // This is a very basic move validation
        // It only checks if the move is within the board and if the destination is not occupied by a piece of the same color
        if (fromRow < 0 || fromRow > 7 || fromCol < 0 || fromCol > 7 ||
            toRow < 0 || toRow > 7 || toCol < 0 || toCol > 7) {
            return false;
        }

        char piece = board[fromRow][fromCol];
        char destPiece = board[toRow][toCol];

        if (piece == ' ') {
            return false;
        }

        if (isupper(piece) == isupper(destPiece) && destPiece != ' ') {
            return false;
        }

        return true;
    }

    void makeMove(int fromRow, int fromCol, int toRow, int toCol) {
        board[toRow][toCol] = board[fromRow][fromCol];
        board[fromRow][fromCol] = ' ';
    }

    bool isGameOver() {
        // This is a simple check for game over
        // It only checks if both kings are still on the board
        bool whiteKing = false, blackKing = false;
        for (const auto& row : board) {
            for (char piece : row) {
                if (piece == 'K') whiteKing = true;
                if (piece == 'k') blackKing = true;
            }
        }
        return !(whiteKing && blackKing);
    }

public:
    ChessGame() : whiteTurn(true) {
        initializeBoard();
    }

    void play() {
        std::string from, to;
        while (!isGameOver()) {
            printBoard();
            std::cout << (whiteTurn ? "White" : "Black") << "'s turn.\n";
            std::cout << "Enter move (e.g., e2 e4): ";
            std::cin >> from >> to;

            int fromCol = from[0] - 'a';
            int fromRow = '8' - from[1];
            int toCol = to[0] - 'a';
            int toRow = '8' - to[1];

            if (isValidMove(fromRow, fromCol, toRow, toCol)) {
                makeMove(fromRow, fromCol, toRow, toCol);
                whiteTurn = !whiteTurn;
            } else {
                std::cout << "Invalid move. Try again.\n";
            }
        }
        printBoard();
        std::cout << "Game Over!\n";
    }
};

int main() {
    ChessGame game;
    game.play();
    return 0;
}