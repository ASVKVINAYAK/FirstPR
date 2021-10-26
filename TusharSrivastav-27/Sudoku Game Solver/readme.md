# Sudoku_Game
About : In this project I have created a solver which will solve a 9X9 Sudoku entered by the user.

Tools Required : Code Editor, GCC Compiler

Language Used : c++

Concept Used : Backtracking

Functions :

1- main(): It takes the input by the user in 9x9 matrix. It also calls other functions which are described below.

2- isSudokuSolved(): Checks if sudoku is solved or not.

3- disp(): Displays the whole 9x9 grid.

4- remove(): Removes elements/number which is greater than 9.

5- dupGrid(): It checks for the duplicate value in a sub grid of 3x3 and remove it.

6- duplicate(): It checks for duplicate value in a row and column and remove it.

7- missingGrid(): It fills the whole subgrid of 3x3 with missing number in that subgrid.

8- checkGrid(): It checks the grid value 0 values in unwanted places.
