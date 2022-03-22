/**
 * @file solveSudoku.c
 * @author Roopesh Verma
 * @brief Function to solve the sudoku
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include"sudoku.h"


/* Takes a partially filled-in grid and attempts
to assign values to all unassigned locations in
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes) */
int solveSudoku(int arr[9][9],int row, int col)
{
    if (row == 8 && col == 9)
    {
        return 1;
    }
    if (col == 9)
    {
        row++;
        col = 0;
    }
    if (arr[row][col] > 0)
    {
        return solveSudoku(arr, row, col + 1);
    }
    for (int num = 1; num <= 9; num++) 
    {         
        if (safeSudoku(arr, row, col, num)==1)
        {
            arr[row][col] = num;
            if (solveSudoku(arr, row, col + 1)==1)
            {
                return 1;
            }
        }
        arr[row][col] = 0;
    }
    return 0;
}
 