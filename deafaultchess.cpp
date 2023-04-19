#include <iostream>
#include <string>

using namespace std;

enum Piece { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN };

enum Color { WHITE, BLACK };


struct ChessPiece {
    Piece piece;
    Color color;
};

ChessPiece board[8][8];

void initialize_board() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j].piece = PAWN;
            if (i < 2) {
                board[i][j].color = WHITE;
            } else if (i > 5) {
                board[i][j].color = BLACK;
            } else {
                board[i][j].color = static_cast<Color>(-1);
            }
        }
    }
}

// Imprimindo o tabuleiro
void print_board() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            switch (board[i][j].piece) {
                case KING:
                    cout << "K";
                    break;
                case QUEEN:
                    cout << "Q";
                    break;
                case ROOK:
                    cout << "R";
                    break;
                case BISHOP:
                    cout << "B";
                    break;
                case KNIGHT:
                    cout << "N";
                    break;
                case PAWN:
                    cout << "P";
                    break;
            }
            switch (board[i][j].color) {
                case WHITE:
                    cout << "w ";
                    break;
                case BLACK:
                    cout << "b ";
                    break;
                default:
                    cout << "- ";
                    break;
            }
        }
        cout << endl;
    }
}

int main() {
    initialize_board();
    print_board();
    return 0;
}
