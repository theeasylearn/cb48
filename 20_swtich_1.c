/*
    write a program to display 2 digit amount into words 
    input : 45 output : four five 
    input : 97 output : nine seven
    steps 
    ----------------------------------------
    1 - create variable number,last,first
    2 - accept number from user 
    3 - get last digit of number 
        last = number%10 
    4 - get first digit of number 
        first = number / 10 
    5 - check condition on first variable and display word accordingly 
    6 - check condition on last variable and display word accordingly 
*/
#include<stdio.h>
void main()
{
    int number,first,last;
    printf("Enter number");
    scanf("%d",&number);
    last = number % 10;
    first = number / 10;
    switch(first)
    {
        case 1: // if(first == 1)
        printf("one");
        break;

        case 2:
        printf("two");
        break;

        case 3:
        printf("three");
        break;

        case 4:
        printf("four");
        break;

        case 5:
        printf("five");
        break;

        case 6:
        printf("six");
        break;

        case 7:
        printf("seven");
        break;

        case 8:
        printf("eight");
        break;

        case 9:
        printf("nine");
        break;

        case 0:
        printf("zero");
        break;

        default:
        printf("invalid output");
        break;
    }
    printf(" ");
    switch(last)
    {
        case 1: // if(first == 1)
        printf("one");
        break;

        case 2:
        printf("two");
        break;

        case 3:
        printf("three");
        break;

        case 4:
        printf("four");
        break;

        case 5:
        printf("five");
        break;

        case 6:
        printf("six");
        break;

        case 7:
        printf("seven");
        break;

        case 8:
        printf("eight");
        break;

        case 9:
        printf("nine");
        break;

        case 0:
        printf("zero");
        break;

        default:
        printf("invalid output");
        break;
    }
}