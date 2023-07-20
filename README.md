# Tic-Tac-Toe Game
This is a simple implementation of the classic Tic Tac Toe game in C++. The game allows two players to take turns and compete against each other on a 3x3 grid until one player wins or the game ends in a draw.
### The Board looks like
![image](https://github.com/Sagar1290/tic-tac-toe/assets/87602892/30085625-b459-420c-b02d-6e12cdd28d79)
## Getting Started
To play the Tic Tac Toe game on your local machine, follow these instructions:

  1. Make sure you have a C++ compiler installed on your system.
  2. Clone this repository to your local machine using Git or download the source code as a ZIP file and extract it.
## How to play
  1. Run the executable game.cpp file of your system
  2. The game will display a 3x3 grid with numbers 1 to 9 representing each cell. To make a move, enter the number corresponding to the cell where you want to place your mark (X or O).
  3. Players take turns to enter their moves until the game ends.
  4. The game ends when one player wins by forming a straight line (horizontal, vertical, or diagonal) of their marks or when the game board is full and there's no winner (a draw).
## Code Overview
The Tic Tac Toe game is typically implemented using a 3x3 grid to represent the game board. 

The board **char board[3][3]:** A 2-dimensional array representing the game board. Each cell can hold either 'X', 'O', or a number (1-9) to indicate an empty cell.

There exist two players player1[X] and player2[O].Switch case operations used to replace the numbers in board with 'X' or 'O'. The implementation of whether the player won a match or match has been draw is made by using true, false logic.

## Acknowledgments
  * This project was inspired by the classic Tic Tac Toe game and was developed as part of a C++ programming exercise.
  * Thanks to the C++ community for providing valuable resources and tutorials on game development.
