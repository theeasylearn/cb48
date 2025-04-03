/* concept of assignment operators */
#include<stdio.h>
void main()
{
    int a = 10, b = 20;
    printf("\na = %d, b = %d ",a,b);

    //a = a + b; // 30
    //  or 
    a+=b;
    printf("\na = %d, b = %d ",a,b);

    a-=b; 
    printf("\na = %d, b = %d ",a,b);

    a*=b; 
    printf("\na = %d, b = %d ",a,b);

    a/=b; 
    printf("\na = %d, b = %d ",a,b);

    b = 2;
    a%=b; 
    printf("\na = %d, b = %d ",a,b);
}