//Function to check whether the value input is valid in sudoku


#include<stdio.h>
#include "sudoku.h"
/**
 * @brief 
 * @author Hrithik Sagar (hrithiksagar36@gmail.com)
 * @param arr 
 * @param row 
 * @param col 
 * @param num 
 * @return int 
 */
int secures(int arr[9][9],int row,int col,int num)
{
     
    // Check if we find the same num
    // in the similar row , we return 0
    for (int x = 0; x <= 8; x++)
    {
        if (arr[row][x] == num)
        {
           return 0;
        }         
    }
        
    // Check if we find the same num in the
    // similar column , we return 0
    for (int x = 0; x <= 8; x++)
    {
         if (arr[x][col] == num)
         {
             return 0;
         }
    }
       
            
 
    // Check if we find the same num in the
    // particular 3*3 matrix, we return 0
    int startRow = row - row % 3,
                 startCol = col - col % 3;
   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i+startRow][j+startCol] == num)
            {
                return 0;
            }
        }
    }
 
    return 1;
}
