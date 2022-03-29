#include<stdio.h>
#include<stdlib.h>
#include"sudoku.h"
#define N 9
/**
 * @brief this is the main code which accumilates al
 * 
 * @return int 
 */

int main()
{
    // 0 means unassigned cells
    printf("\nBelow is a sample 9X9 Sudoku Problem \n\n");
    int grid[N][N] = {  {0,0,0,2,6,0,7,0,1},
                        {6,8,0,0,7,0,0,9,0},
                        {1,9,0,0,0,4,5,0,0},
                        {8,2,0,1,0,0,0,4,0},
                        {0,0,4,6,0,2,9,0,0},
                        {0,5,0,0,0,3,0,2,8},
                        {0,0,9,3,0,0,0,7,4},
                        {0,4,0,0,5,0,0,3,6},
                        {7,0,3,0,1,8,0,0,0}  };

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            printf("%d  ", grid[i][j]);             
        }
        printf("\n");
    }
    
    printf("\nBelow is the Solution\n\n");
    if (solvings(grid, 0, 0)==1)
    {
        printings(grid);
    }
    else
    {
        printf("No solution exists\n");
    }






printf("\nTo enter your Sudoku, enter 1. \n To exit,enter 2\n\n");
int a, *newArr[N][N];
scanf("%d",&a);
if(a==1)
{
   printf("\n\n -->ENTER BELOW YOUR OWN SUDOKU VALUES.<--\n NOTE: 1. Must be a 9X9 Sudoku.\n\t2. For empty spaces enter '0'.\n\t 3.The Gap while entering represents that value is being added to a new row.\n\n");

            for(int i=0;i<9;i++)
            {
                for(int j=0;j<9;j++)
                {
                  printf("  ");
                  scanf("%d",newArr[i][j]);
                  printf("  ");
                }
            printf("\n");
            }

            printf("\nBelow is the Solution\n\n");

            if (solvings(newArr[N][N], 0, 0)==1)
            {
              printings(newArr[N][N]);
            }
            else
            {
              printf("No solution exists\n");
            }
}

else if(a==2)
{
    exit(1);           
}

printf("\t\t Thankss!!");
return 0;
}