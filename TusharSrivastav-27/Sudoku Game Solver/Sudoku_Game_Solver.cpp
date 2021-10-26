/*****SUDOKU-SOLVER*****/
/*Created by - Tushar Srivastav*/

#include<iostream>
#include<math.h>
using namespace std;
bool isSudokuSolved(int grid[9][9]){  //ckecks if sudoku is solved
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(grid[i][j] > 9)
            {
                return false;
            }
        }
    }
    return true;
}
