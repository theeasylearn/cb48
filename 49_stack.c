// stack- last in first out
// push
// pop

#include<stdio.h>

int stack[5];
int top = -1;

void push(int n)
{
    if(top==5-1){
        printf("stack is full");
    }
    else{
        top++;  
        stack[top] = n;
        printf("\nadded : %d",n);
    }
}

void pop()
{
    if(top==-1){
        printf("\nstack is empty");
    }
    else{
        printf("\ndeleted item : %d",stack[top]);
        top--;
    }
    
    
}

void display(){
    printf("\nstack : ");
    // printf("%d",stack[0]);
    for(int i=0 ;i<=top;i++)
    {
        printf("\n+----+");
        printf("\n| %02d |",stack[i]);
        printf("\n+----+");

    }
}

void main()
{
    int choise,n;

    while(1){
        printf("\nenter your choise(1-2-3-0) :");
        scanf("%d",&choise);
    
        switch(choise){
            case 1:
                printf("enter value to push : ");
                scanf("%d",&n);
                push(n);
                break;
    
            case 2:
                pop();
                break;
    
            case 3:
                display();
                break;
    
            case 0:
                break;
        }

        if(choise==0){
            break;
        }
    }

}