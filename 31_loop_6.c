/*
    write a program to generate multiplication table of given number 
    input : 10
    output 
    10 x 1 =   10
    10 x 2 =   20
    10 x 10 = 100
    steps 
    ---------------------------
    1) create variable number,multiplier,result
    2) take input from user, store into number
    3) store 1 into multiplier 
    
    4) multiply number with multiplier store answer into result
    5) display number x multipler = result 
    6) increment multiplier by 1
    7) repeat steps 4 to 6 till multiplier is less then or equal to 10
   
*/
#include<stdio.h>
void main()
{
    int number,multiplier,result;
    printf("Enter number");
    scanf("%d",&number);
    for(multiplier=1;multiplier<=10;multiplier++)
    {
        result = number * multiplier;
        printf("%2dx%2d=%3d\n",number,multiplier,result);
    }

    
}