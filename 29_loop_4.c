/*
    write a program to findout factorial of given number
    steps
    -------------------------------------------------
    1 - create variable num & factorial
    2 - accept input in num (assume 5)
    3 - store 1 into factorial
    4 - multiply factorial with number

    5 - factorial = factorial * num
    6 - decrease num by 1
    7 - repeat step 5 & 6 till num is above 1
    8 - display factorial

*/
#include <stdio.h>
void main()
{
    int num, factorial;
    printf("Enter number");
    scanf("%d", &num); // 5

    factorial = 1;               // 1
    factorial = factorial * num; // 5

    while(num>1)
    {
        num--; // num = num - 1
        factorial = factorial * num;
    }
    printf("%d", factorial);
}