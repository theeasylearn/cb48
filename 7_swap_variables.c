/*
    write a program to swap two variables value without using 3rd variable 
        input : a = 10, b = 20 
        output : a = 20, b = 10 
    steps
    1) create variable a accept input from user 
    2) create variable b accept input from user 
    3) a = a + b  // 30
    4) b = a - b  // 10
    5) a = a - b  // 20 
    6) display a and b 
*/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value for a ");
    scanf("%d",&a);
    printf("Enter value for b ");
    scanf("%d",&b);
    
    printf("a = %d b = %d",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n a = %d b = %d",a,b);
}