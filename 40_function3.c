// write a function make addition of 2 numbers

#include<stdio.h>

int add(int a,int b)
{
    int ans;
    ans = a+b;
    return ans ;
}

void main()
{
    int n;
    n = add(5,10);
    printf("%d",n);
    
    n = add(10,20);
    printf("\n%d",n);
    
    printf("\n%d",add(40,50));
}