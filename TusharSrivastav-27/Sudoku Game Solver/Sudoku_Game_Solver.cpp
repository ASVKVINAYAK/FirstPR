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
void disp(int grid[9][9]){      //for displaying the whole 9x9 grid
    for(int i=0;i<9;i++)
    {
        if(i==3 || i==6)
        {
            for(int j=0;j<66;j++)
            {
                cout << "-";
            }
            cout << endl;
        }
        for(int j=0;j<9;j++)
        {
            cout << grid[i][j] << "\t";
            if(j==2||j==5)
            {
                cout << "|";
            }
        }
        cout << endl;
    }
}
