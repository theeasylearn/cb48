#include<stdio.h>
void main()
{
    int choise;
    
    int count=1;
    
    
    printf("enter stunent no : ");
    scanf("%d",&choise);
    int marks[choise];

    for(int i =0; i<choise ;i++)
    {
        printf("enter student %d marks : ",count);
        scanf("%d",&marks[i]);
        count++;
    }

    for(int i=0 ; i<choise ;i++)
    {
        printf("%d ",marks[i]);
    }
   

    // marks[1] = 10;
    // marks[2] = 20;
    // marks[3] = 30;
    // marks[4] = 80;
 

    // printf("\n%d",marks[1]);
    // printf("\n%d",marks[2]);
    // printf("\n%d",marks[3]);
    // printf("\n%d",marks[4]);
    // printf("\n%d",marks[5]);
    // printf("\n%d",marks[6]);
    // printf("\n%d",marks[7]);
    // printf("\n%d",marks[8]);
    // printf("\n%d",marks[9]);
}