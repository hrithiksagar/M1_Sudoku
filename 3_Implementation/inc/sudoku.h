//* @brief Header file for sudoku project

#ifndef __SUDOKU_H__
#define __SUDOKU_H__

/**
 * @brief Function to print Sudoku
 * 
 * @param arr Sudoku Grid Passed
 */

int printings(int arr[9][9]);

/**
 * @brief Function to check if input value is valid and move to next column and rows.
 * @param arr Sudoku Grid
 * @param row Row of sudoku
 * @param col Column of sudoku
 * @param num Number to be checked and added
 */

int secures(int arr[9][9], int row, int col, int num);

/**
 * @brief Function to solve Sudoku
 * 
 * @param arr Sudoku Grid
 * @param row Row of sudoku
 * @param col Column of sudoku
 */

int solvings(int arr[9][9],int row, int col);


#endif






