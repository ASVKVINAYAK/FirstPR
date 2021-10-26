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
void dupGrid(int grid[9][9], int n){    //checks for duplicate value in a sub grid of 3x3 and for removing it
    int hs, vs, no=0, k=0;
    switch(n){
        case 0: hs=0; vs=0;
        break;
        case 1: hs=3; vs=0;
        break;
        case 2: hs=6; vs=0;
        break;
        case 3: hs=0; vs=3;
        break;
        case 4: hs=3; vs=3;
        break;
        case 5: hs=6; vs=3;
        break;
        case 6: hs=0; vs=6;
        break;
        case 7: hs=3; vs=6;
        break;
        case 8: hs=6; vs=6;
    }
    for(int i=vs;i<vs+3;i++)
    {
        for(int j=hs;j<hs+3;j++)
        {
            if(grid[i][j]<10)
            {
                no=(no*10)+grid[i][j];
            }
        }
    }
    for(int i=vs;i<vs+3;i++)
    {
        for(int j=hs;j<hs+3;j++)
        {
            if(grid[i][j]>9)
            {
                k=no;
                while(k){
                    remove((&grid[i][j]), (k%10));
                    k/=10;
                }
            }
        }
    }
}
void duplicate(int grid[9][9]){     //checks for duplicate value in a row and col and for removing it 
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(grid[i][j] < 10)
            {
                for(int k=0;k<9;k++)
                {
                    if(grid[i][k]>9)
                    {
                        remove(&grid[i][k], grid[i][j]);
                    }
                    if(grid[k][j]>9)
                    {
                        remove(&grid[k][j], grid[i][j]);
                    }
                }
            }
        }
    }
}
void missingInGrid(int grid[9][9], int n){ //fills the whole subgrid of 3x3 with missing no in that subgrid
    int hs, vs, c[9]={0}, no=0;
    switch(n){
        case 0: hs=0; vs=0;
        break;
        case 1: hs=3; vs=0;
        break;
        case 2: hs=6; vs=0;
        break;
        case 3: hs=0; vs=3;
        break;
        case 4: hs=3; vs=3;
        break;
        case 5: hs=6; vs=3;
        break;
        case 6: hs=0; vs=6;
        break;
        case 7: hs=3; vs=6;
        break;
        case 8: hs=6; vs=6;
    }
    for(int i=vs;i<vs+3;i++)
    {
        for(int j=hs;j<hs+3;j++)
        {
            if(grid[i][j]!=0)
            {
                c[(grid[i][j])-1]++;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        if(c[i]==0)
        {
            no = (no*10) + (i+1);
        }
    }
    for(int i=vs;i<vs+3;i++)
    {
        for(int j=hs;j<hs+3;j++)
        {
            if((grid[i][j])==0)
            {
                (grid[i][j]) = no;
            }
        }
    }

}
int checkGrid(int grid[9][9]){      //for checking the grid for 0 values in unwanted places
    try{
        for(int i=0;i<9;i++)
        {
            int chkh[10]={0}, chkv[10]={0};
            for(int j=0;j<9;j++)
            {
                chkh[grid[i][j]]++;
                chkv[grid[j][i]]++;
            }
            if(chkh[0] == 9)
            {
                throw(0);
            }
            if(chkv[0] == 9)
            {
                throw(1);
            }
            for(int j=1;j<10;j++)
            {
                if(chkh[j] > 1)
                {
                    throw(2);
                }
                if(chkv[j] > 1)
                {
                    throw(3);
                }
            }
        }
    }
    catch(int e){
        switch(e){
            case 0: cout << "row error: empty row!" << endl;
            break;
            case 1: cout << "column error: empty column!" << endl;
            break;
            case 2: cout << "row error: duplicate number in same row!" << endl;
            break;
            case 3: cout << "column error: duplicate number in same column!" << endl;
        }
        return -1;
    }
    return 1;
}
