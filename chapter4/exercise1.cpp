#include <iostream>

enum Square {
    NOTHING = 0,
    PAWN,
    ROOK,
    KNIGHT,
    BISHOP,
    KING,
    QUEEN
};


int main() {

    Square board [8][8] = {NOTHING};
    std::cout << "Chess Board" << std::endl;

    board[0][0] = board[0][4] = board[7][0] = board[7][4] = ROOK;
    board[0][1] = board[0][2] = board[7][1] = board[7][2] = BISHOP;
    board[0][6] = board[0][7] = board[7][6] = board[7][7] = KNIGHT;
    board[0][3] = board[7][3] = QUEEN;
    board[0][5] = board[7][5] = KING;
    for (int i = 7; i >= 0; i--)
    {
        board[1][i] = board[6][i] = PAWN;
    }

    for (int line = 7; line >= 0; line--)
    {
        for (int column = 7; column >= 0; column--)
        {
            std::cout << board[7 - line][7 - column] << " ";
        }
        std::cout << std::endl;
    } 

    return 0;
}


