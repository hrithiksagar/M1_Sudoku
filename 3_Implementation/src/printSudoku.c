
#include<stdio.h>
#include "sudoku.h"

int printSudoku(int arr[N][N])
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


