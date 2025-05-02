// write a program that check a string is palimbrome or not

// 1) string input
// 2) reverse a string
// 3) check all index value are same or not
// 4) if same -> palimbrome
    //   else-> not

// a1= string
// a2 = reverse string

#include<stdio.h>
void main()
{
    char a1[50];
    char a2[50];
    int count;
    int n;
    int check = 0;

    printf("enter a string : ");
    for(int i=0 ; i<=49 ; i++)
    {
        scanf("%c",&a1[i]);
        if(a1[i]=='\n'){
            count=i;
            break;
        }
    }

    n=count-1;
    for(int i=0; i<=count-1;i++){
        a2[i] = a1[n];
        n--;
    }

    // a1=hello
    // a2=olleh
    
    for(int i=0 ; i<=count-1 ; i++ ){
        if(a1[i]==a2[i]){
            continue;
        }
        else{
            check=1;
            break;
        }
    }

    if(check==1){
        printf("it is not palimbrom string");
    }
    else{
        printf("it is palimbrome staring");
    }

    // a2[1] = a1[3];
    // a2[2] = a1[2];
    // a2[3] = a1[1];
    // a2[4] = a1[0];

    // printf("%c%c%c%c%c",a2[0],a2[1],a2[2],a2[3],a2[4]);
    
    // for(int i=0 ; i<=count-1 ; i++)
    // {
    //     printf("%c",a2[i]);
        
    // }
}