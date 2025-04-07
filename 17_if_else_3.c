/*
    write a program to findout whether given month  has 30 days or 31 days or 28 days 
    input  Month : 01 output : this month has 31 days
    input  Month : 04 output : this month has 30 days
    steps 
    1 - create variable month 
    2 - accept input from user store in month 
    3 - check is this month has 28 days 
        if month == 2
            display this month has 28/29 days 
    4 - check is this month has 31 days 
        if month == 1 or month==3 or month==5 or month == 7 or month== 8 or month == 10 or month ==12
            display this month has 31 days 
        otherwise 
            display this month has 30 days 
*/
#include<stdio.h>
void main()
{
    int month;
    printf("enter months");
    scanf("%d",&month);

    if(month==2) // == != < > <= >=
    {
        printf("this month has 28 to 29 days");
        return; //stop program immediately 
    }

    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    {
        printf("this month 31 days");
    }

    else 
    {
        printf("this month 30 days");
    }
}