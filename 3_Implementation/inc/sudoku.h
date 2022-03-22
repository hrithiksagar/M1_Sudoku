#ifndef __SUDOKU_H__
#define __SUDOKU_H__
#define N 9

int printSudoku(int arr[N][N]);


int safeSudoku(int arr[N][N], int row, int col, int num);


int solveSudoku(int arr[N][N],int row, int col);



#endif






