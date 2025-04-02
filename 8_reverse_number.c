//write a program to reverse two digit given amount 
/*
    step 
    1) create variable amount & last_digit,first_digit, and accept amount from user (amount = 19)
    2) get last digit of amount and store in last_digit variable
        last_digit = amount % 10 // 9
    3) get first digit of amount 
        first_dight = amount / 10 // 1 
    4) combine last digit and first digit 
        amount = (last_digit * 10) + first_digit
*/
#include<stdio.h>
void main()
{
    int amount,first_digit,last_digit;
    printf("Enter amount ");
    scanf("%d",&amount);

    last_digit = amount % 10;
    //printf("%d",last_digit);
    
    first_digit = amount / 10;
    //printf("\n%d",first_digit);

    amount = (last_digit * 10) + first_digit;
    printf("reverse amount = %d",amount);

    
}