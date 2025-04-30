#include<stdio.h>

struct student{
    char name[50];
    int age;
    float weight;
    int roll;
};

void main()
{
    // declare obj of student structure
    struct student s1 ;

    s1.age = 20;
   
    s1.weight = 50.4;
    s1.roll = 202;

    printf("enter your name : ");
    for(int i=0 ; i<=49 ; i++)
    {
        scanf("%c",&s1.name[i]);
        if(s1.name[i] == '\n'){
            break;
        }
    }

    
    printf("enter your weight : ");
    scanf("%f",&s1.weight);

    

    for(int i=0; i<=49 ; i++){
        printf("%c",s1.name[i]);
        if(s1.name[i]=='\n'){
            break;
        }
    }

    printf("%d",s1.age);
    printf("\n%f",s1.weight);
    printf("\n%d",s1.roll);
}