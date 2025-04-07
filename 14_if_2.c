/* 
    write a program to findout given number is even(baki) or odd (eki)
    steps
    -------------------------------
    1) create integer variable number, reminder 
    2) accept input in number variable 
    3) get reminder by dividing number with 2 
        reminder =  number%2 
    4) if reminder is 1  or -1
        then display message number is odd 
    5) if reminder is 0 
        then display message number is even 
*/
#include<stdio.h>
void main()
{
    int number, reminder;
    printf("enter number");
    scanf("%d",&number); //number = 10
    reminder = number%2; //reminder 0
    printf("\n reminder = %d",reminder);
    if(reminder==1 || reminder==-1) // < > <= >= != ==
    {
        printf("\n number is odd");
    }
    
    if(reminder==0 )
    {
        printf("\n number is even");
    }

    printf("\n good bye");
}