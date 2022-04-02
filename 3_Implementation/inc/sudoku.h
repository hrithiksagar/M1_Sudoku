/**
 * @file sudoku.h
 * @author Hrithik Sagar (hrithiksagar36@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-02
 * @copyright Copyright (c) 2022
 */

#ifndef __SUDOKU_H__
#define __SUDOKU_H__
/**
 * @brief Calling Function to print Sudoku
 * @param arr Sudoku Grid Passed
 */

int printings(int arr[9][9]);

/**
 * @brief Calling Function to check if input value is valid and move to next column and rows.
 * @param arr Sudoku Grid
 * @param row Row of sudoku
 * @param col Column of sudoku
 * @param num Number to be checked and added
 */

int secures(int arr[9][9], int row, int col, int num);

/**
 * @brief Calling Function to solve Sudoku
 * @param arr Sudoku Grid
 * @param row Row of sudoku
 * @param col Column of sudoku
 */

int solvings(int arr[9][9],int row, int col);


#endif






