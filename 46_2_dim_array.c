#include<stdio.h>
void main()
{
    int marks[3][5];

    // marks[0][0] = 10;

    // printf("%d",marks[0][0]);
    int count=1;

    for(int i=0 ; i<=2 ;i++)
    {
        for(int j=0; j<=4 ; j++)
        {
            printf("enter marks %d : ",count);
            scanf("%d",&marks[i][j]);

            if(marks[i][j]>=0 && marks[i][j]<=100){
                printf("ok\n");
            }

            count++;
        }
    }

    for(int i=0 ; i<=2 ;i++)
    {
        for(int j=0; j<=4 ; j++)
        {
            printf("%d ",marks[i][j]);
            
        }
    }
}