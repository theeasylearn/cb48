/*
    write a program to display following pattern
    100 90 80 70 60 .... 0
    steps
    1 - create variable count  store 100 in it.
    2 - display count  // 100
    3 - decrement count by 10
    4 - repeat step 2 and 3 till count is greater then or equal 0

*/
#include <stdio.h>
void main()
{
    int count = 100;

    while(count>=0)
    {
        printf("%10d", count);
        count = count - 10;
    }
}
