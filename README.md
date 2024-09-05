# Tic-Tac-Toe

# Tic-Tac-Toe Game in C++

## Overview
This project is a simple, text-based Tic-Tac-Toe game implemented in C++. The game allows two players to play against each other on the same computer. It manages the game state, checks for wins or draws, and displays the game board after every move.

## Features
- **Game Board:** 
  - 3x3 grid displayed after every move.
  - Players can place their marks ('X' and 'O') in any empty spot.
  
- **Player Moves:**
  - Alternates between Player 1 ('X') and Player 2 ('O').
  - Input validation ensures that players can't place a mark in an already occupied space.

- **Win and Draw Conditions:**
  - Detects wins (three in a row horizontally, vertically, or diagonally).
  - Detects a draw if the board is full and no player has won.

- **Game Loop:**
  - The game runs in a loop until there is a winner or a draw.
  - Players are prompted to play again, and the board resets if they choose to continue.

## How to Run
1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/tictactoe.git
    ```
2. Compile the program:
    ```bash
    g++ -o tictactoe main.cpp
    ```
3. Run the game:
    ```bash
    ./tictactoe
    ```

## Gameplay Instructions
- Players take turns to place their marks ('X' for Player 1 and 'O' for Player 2) on the 3x3 grid.
- Enter the number corresponding to the grid position where you want to place your mark.
- The game checks after each move for a winner or a draw.
- After the game ends, players can choose to play again or exit.

## Outputs
![Screenshot 2024-09-05 100500](https://github.com/user-attachments/assets/ed54d7cf-2271-49b9-b507-7e4ac0e5dd4e)
![Screenshot 2024-09-05 100517](https://github.com/user-attachments/assets/f69bdd24-6973-4a55-813d-6056788b22d1)




