/*
    write  a program to print following pattern
    1 8 27 64 125 .... 10000
    1 2 3  4  5 .........10000
    ------------------------
    step
    1 - create variable num and qube
    2 - store 1 into num

    3 - calculate cube and store in qube
        qube = num * num * num
    4   display qube
    5   increment num by 1
    7   repeat step 3 to 7 till qube<=10000
*/
#include <stdio.h>
void main()
{
    int num, qube;
    num = 1;

    while(qube<9261)
    {
        qube = num * num * num; // 1
        printf("%10d", qube);
        num++; // num = num + 1
    }
}