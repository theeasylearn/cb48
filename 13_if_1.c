/* 
    write a program to findout qube of given positive number. 
    steps 
    --------------------------------
    1 - create variable number & qube 
    2 - accept input from user in number 
    3 - check if number is negative 
        3.2 convert negative number into positive number 
        3.3 display number was negative converted into positive 
    4 - calculate qube 
    5 - display qube 
*/
#include<stdio.h>
void main()
{
    int number,qube;
    printf("\n enter number"); // 10
    scanf("%d",&number);
    if(number<0) // == != < > <= >=
    {
        number = 0 - number;
        printf("\n number was negative, converted into positive");
    }
    qube = number * number * number;
    printf("\nqube = %d",qube);
}