// 1
// 12
// 123
// 1234

#include <stdio.h>
void main()
{
    // int count;

    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            printf(" %d", i);
        }
        printf("\n");
    }

    // for (int i = 1; i <= 2; i++)
    // {
    //     printf("%d", i);
    // }
    // printf("\n");

    // for (int i = 1; i <= 3; i++)
    // {
    //     printf("%d", i);
    // }
    // printf("\n");

    // for (int i = 1; i <= 4; i++)
    // {
    //     printf("%d", i);
    // }
    // printf("\n");

    // count=1;
    // printf("%d",count);
    // count++;
    // printf("%d",count);
    // count++;
    // printf("%d",count);
    // count++;
    // printf("%d",count);

    // count=1;
    // printf("%d",count);
    // count++;
    // printf("%d",count);

    // count=1;
    // printf("%d",count);
    // count++;
    // printf("%d",count);
    // count++;
    // printf("%d",count);
}