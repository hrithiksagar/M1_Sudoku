#include<stdio.h>
#include "sudoku.h"
/**
 * @brief Function to Print Sudoku
 * @author Hrithik Sagar (hrithiksagar36@gmail.com)
 * @param arr 
 * @return int 
 */
int printings(int arr[9][9])
{
     for (int i = 0; i < 9; i++)
      {
         for (int j = 0; j < 9; j++)
         {
             printf("%d  ",arr[i][j]); 
         }            
        printf("\n");
       }

       return 0;
}


