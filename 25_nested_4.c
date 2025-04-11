/*
    write a program to check given year is leap year or not 
    steps 
    1 - create variable year,reminder1,reminder2,reminder3
    2 - accept year from user, store in year variable
    3 - store reminder of year%4 in reminder1 variable
    4 - store reminder of year%100 in reminder2 variable
    5 - store reminder of year%400 in reminder3 variable
    6 - check year is leap year or not 
        if reminder1 is zero and reminder2 is not zero 
            year is leap year 
        otherwise 
            if reminder2 is zero and reminder3 is zero 
                year is leap year 
            otherwise 
                year is not leap year
*/
#include<stdio.h>
void main()
{
    int year,reminder1,reminder2,reminder3;
    printf("Enter year");
    scanf("%d",&year);

    reminder1=year%4;
    reminder2=year%100;
    reminder3=year%400;

    printf("\n reminder1 = %d reminder2 = %d reminder3 = %d",reminder1,reminder2,reminder3);
    if(reminder1==0 && reminder2!=0)
    {
        printf("\n year is leap year");
    }
    else 
    {
        if(reminder2==0 && reminder3==0)
        {
            printf("\n year is leap year");
        }
        else 
        {
            printf("\n year is not leap year");
        }
    }
}