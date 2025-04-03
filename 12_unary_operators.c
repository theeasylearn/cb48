/* concept of unary operators */
#include<stdio.h>
void main()
{
    int a = 10,b;

    b = ++a; //b = 11 a = 11
    printf("b = %d a = %d",b,a);

    b = a++; //b = 11 a = 12
    printf("\nb = %d a = %d",b,a);


    b = --a; //b = 10 a = 10
    printf("\nb = %d a = %d",b,a);

    b = a--; //b = 10 a = 09
    printf("\nb = %d a = %d",b,a);
}