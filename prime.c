// -> input n
// -> 2 - n-1
// -> check number%n == 0
//  ->not prime | prime break

// false continue

#include<stdio.h>
void main()
{
    int num ;
    int count ;
    printf("enter a number : ");
    scanf("%d",&num);

    count = 2;
    
    while(count<=num-1)
    {
        if(num%count == 0){
            printf("it is not prime number");
            break;
        }
        count++;
    }

    if(count==num){
        printf("it is prime number");
    }

    // -----------------------------------------
    int count ;
    for(int i=2;i<=num-1;i++)
    {
        if(num%i == 0){
            printf("it is not prime number");
            break;
        }
        count=i;
    }

    if(count==num){
        printf("it is prime number");
    }
    // ------------------------------------------

    do
    {
        if(num%count == 0){
            printf("it is not prime number");
            break;
        }
        count++;
    }while((count<=num-1)) ;

    if(count==num){
        printf("it is prime number");
    }

    // printf("\n%d",count);

    // if(num%count == 0){
    //     printf("\nit is not prime number");
    // }
    // else{
    //     printf("\nit is prime number");
    // }

    // count++;
    // if(num%count == 0){
    //     printf("\nit is not prime number");
    // }
    // else{
    //     printf("\nit is prime number");
    // }

}