/*
 write a program to print following pattern
 *
 * *
 * * *
 * * * *
 * * * * *
*/
#include <stdio.h>
void main()
{
    int column,row;
    for(row=1;row<=5;row++) //2
    {
        for (column = 1; column <= row; column++)
        {
            printf("* ");
        }
        printf("\n");
    }
}