/*
    write a program to convert given minutes into hours & remaining minutes.
    input 
        1) minutes : 210    output Hours : 3  Minutes : 30   
        2) minutes : 110    output Hours : 1 Minutes : 50
        3) minutes : 75     output Hours : 1  Minutes : 15
    steps 
    ----------------------------------------------------------
    1) create variable minute, hours
    2) accept minutes from user and store in minutes variable
    3) calculate hours (210)
        hours = minutes / 60
    4) calculate remaining minutes 
        minutes = minutes - (hours * 60) 
    5) display hours and minutes 
*/
#include<stdio.h>
void main()
{
    int hours,minutes;
    printf("\n enter total minutes");
    scanf("%d",&minutes);
    hours = minutes / 60;
    minutes = minutes - hours * 60;
    printf("hours = %d remaining minutes = %d",hours,minutes);
}