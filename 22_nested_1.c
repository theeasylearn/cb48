/* write a program to accept time in 24 hour format and display it in 12 hours format
    input : 16 hours output : 4 PM
    input : 08 hours output : 8 AM
    steps 
    ------------------------------------------------------------------
    1 - create variable hours 
    2 - accept input in hours variable 
    3 - check if hours are valid then
        3.2 check if hours is above 11 
            then subtract 12 from hours 
            and display hours with PM word 
        3.3 - otherwise 
            display hours with AM word
    4 otherwise 
        display invalid hours 
*/
#include<stdio.h>
void main()
{
    int hours;
    printf("\n enter hours in 24 hours format");
    scanf("%d",&hours);
    if (hours>=1 && hours<=24) //outer 
    {
        if(hours>11) //inner 
        {
            hours = hours - 12;
            printf("%d PM",hours);
        }
        else 
        {
            printf("%d AM",hours);
        }
    }
    else 
    {
        printf("invalid hours");
    }
    printf("\n GOOD BYE.");
}