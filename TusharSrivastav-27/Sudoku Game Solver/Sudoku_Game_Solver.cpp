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
void remove(int *n, int k){     //removing an element from no greater than 9 eg n=123 k=2 resulting value of n=13
    int c=-1, m=0, no=(*n);
    while(no){
        c++;
        if(no%10 == k)
        {
            no/=10;
            (*n)=no*((int)pow(10,c))+m;
            return;
        }
        m = m+(no%10*pow(10,c));
        no/=10;
    }
}
