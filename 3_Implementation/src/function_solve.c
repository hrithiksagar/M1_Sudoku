#include<stdio.h>
#include"sudoku.h"



int solveSudoku(int grid[N][N], int row, int col)
{
     
    if (row == N - 1 && col == N)
        return 1;
    if (col == N)
    {
        row++;
        col = 0;
    }
    if (grid[row][col] > 0)
        return solveSudoku(grid, row, col + 1);
    
    for (int num = 1; num <= N; num++)
    {
        if (isSafe(grid, row, col, num)==1)
        {
            grid[row][col] = num;
            if (solveSudoku(grid, row, col + 1)==1)
                return 1;
        }
        grid[row][col] = 0;
    }
    return 0;
}