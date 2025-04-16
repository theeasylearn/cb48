/*
    write a program to print following pattern
    1 -2 3 -4 5 -6 ... up to ±100
    steps
    1 create variable count, store 1
    2 check count is odd or even
    3 if count is odd
        display count
      otherwise
        count = 0 - count; -2
        display count
        count = 0 - count; 2
    4 increment count by 1
    repeat step 3 & 4 till count<=100
*/
#include <stdio.h>
void main()
{
    int count;
    for(count = 1;count<=100;count++)
    {
        if (count % 2 == 1) // odd
        {
            printf("%8d", count);
        }
        else
        {
            count = 0 - count;
            printf("%8d", count);
            count = 0 - count; // convert it into positive
        }
    }
}