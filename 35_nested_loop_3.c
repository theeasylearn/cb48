/*
 write a program to print following pattern
     *
    **
   ***
  ****
 *****
*/
#include <stdio.h>
void main()
{
    int column, row,astrik,count=1;
    column = 1;
    row = 5;
    while (row >= 1) // outer loop
    {
        column = 1;
        do
        {
            printf(" ");
            column++;
        } while (column <= row); // inner loop
        for(astrik=1;astrik<=count;astrik++)
        {
            printf("*");
        }
        count++;
        printf("\n");
        row--;
    }
}