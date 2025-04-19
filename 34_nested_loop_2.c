/*
 write a program to print following pattern
 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1
*/
#include <stdio.h>
void main()
{
    int column, row;
    row=5;
    while(row>=1)
    {
        column = 1;
        while (column <= row)
        {
            printf("%d ",column);
            column++;
        }
        printf("\n");
        row--; 
    }
}