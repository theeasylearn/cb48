/*  write a program to display name of the day from given day of week as number
    steps 
    --------------------------
    1 - create variable day
    2 - accept input from user in variable day 
    3 - check day variable's value and display day name accordingly

*/
#include<stdio.h>
void main()
{
    int day;
    printf("Enter day of week (1 to 7)");
    scanf("%d",&day);
    if(day==1) // < > <= >= == !=
    {
        printf("it is monday");
    }
    else if(day==2)
    {
        printf("it is tuesday");
    }
    else if(day==3)
    {
        printf("it is wednesday");
    }
    else if(day==4)
    {
        printf("it is thursday");
    }
    else if(day==5)
    {
        printf("it is friday");
    }
    else if(day==6)
    {
        printf("it is saturday");
    }
    else if(day==7)
    {
        printf("it is sunday");
    }
    else 
    {
        printf("it is not valid input");
    }
    printf("\n Good bye");
}