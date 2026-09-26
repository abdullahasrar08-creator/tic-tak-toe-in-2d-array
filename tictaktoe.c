#include <stdio.h>

void checkWinner(char board[3][3]) {
    // Checking horizontal rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
            printf("Player X wins horizontally!\n");
            return;
        }
    }
    // Checking vertical columns
    for (int j = 0; j < 3; j++) {
        if (board[0][j] == 'X' && board[1][j] == 'X' && board[2][j] == 'X') {
            printf("Player X wins vertically!\n");
            return;
        }
    }
    printf("No win detected for Player X on this configuration.\n");
}

int main() {
    // 2D Array simulating a custom state of a game board
    char board[3][3] = {
        {'X', 'O', 'O'},
        {'X', 'X', 'O'},
        {'O', 'O', 'X'}
    };

    printf("--- Current Board State ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    checkWinner(board);
    return 0;
}
