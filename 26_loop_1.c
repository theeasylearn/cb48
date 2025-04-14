/*
    write a program to display following pattern 
    1   3   5   7   9   11  13  ..... 100
    steps 
    1 - create variable count,/ store 1 in it.
    2 - display count  // 1
    3 - increment count by 2
    4 - repeat step 2 and 3 till count is less then 100  
*/
#include<stdio.h>
void main()
{
    int count = 1;
    while(count<100) // == != < > <= >= 
    {
        printf("%10d",count); //1 3 5 99
        count = count + 2; //101
    }
    printf("\n good bye....");
   
}
