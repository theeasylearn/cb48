//concept of relational operators 
#include<stdio.h>
void main()
{
    int a = 10, b = 10, result;

    result = a == b; // 0
    printf("\n %d = %d == %d",result,a,b);

    result = a != b; // 1
    printf("\n %d = %d != %d",result,a,b);

    result = a < b; // 1
    printf("\n %d = %d < %d",result,a,b);

    result = a > b; // 0
    printf("\n %d = %d > %d",result,a,b);

    result = a <= b; // 1
    printf("\n %d = %d <= %d",result,a,b);

    result = a >= b; // 0
    printf("\n %d = %d >= %d",result,a,b);
}