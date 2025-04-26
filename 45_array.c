// string input

// 1) input a name
// 2) store in array
// 3) print name

#include<stdio.h>
void main()
{
    char name[50];

    printf("enter your name : ");
    for(int i=0 ; i<50 ; i++){
        scanf("%c",&name[i]);
        if(name[i]=='\n')
        {
            break;
        }
    }    

    for(int i=0 ; i<50 ;i++){
        printf("%c",name[i]);

        if(name[i]=='\n')
        {
            break;
        }
    }
    printf("\n");

    for(int i=49 ; i>=0 ;i--){
        printf("%c",name[i]);

        if(name[i]=='\n')
        {
            break;
        }
    }

}