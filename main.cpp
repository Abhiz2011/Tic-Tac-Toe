#include <iostream>
using namespace std;

// Function to display the current state of the board
void displayBoard(char board[3][3]) {
    cout << "Current board:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "--|---|--\n";
    }
    cout << endl;
}

// Function to check if there's a winner
bool checkWin(char board[3][3], char player) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }
    return false;
}

// Function to check if the board is full (draw)
bool checkDraw(char board[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

// Function to handle player moves
void playerMove(char board[3][3], char player) {
    int move;
    bool validMove = false;
    do {
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> move;
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;
        if (move >= 1 && move <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
            validMove = true;
        } else {
            cout << "Invalid move. Try again.\n";
        }
    } while (!validMove);
}

int main() {
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    char currentPlayer = 'X';
    bool gameWon = false;

    // Game loop
    do {
        displayBoard(board);
        playerMove(board, currentPlayer);
        gameWon = checkWin(board, currentPlayer);
        if (gameWon) {
            displayBoard(board);
            cout << "Player " << currentPlayer << " wins!\n";
        } else if (checkDraw(board)) {
            displayBoard(board);
            cout << "It's a draw!\n";
            break;
        } else {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // Switch player
        }
    } while (!gameWon);

    return 0;
}
