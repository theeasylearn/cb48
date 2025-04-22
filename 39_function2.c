//write a function that take a number and print even or odd
// with argument without return value function

#include<stdio.h>

void check(int number)
{
    if(number%2==0){
        printf("\neven");
    }
    else{
        printf("\nodd");
    }
}

void main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    
    check(3);

    check(8);
    
    check(n);
    

}