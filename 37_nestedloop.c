// a
// ab
// abc
// abcd

#include <stdio.h>
void main()
{
    // printf("%c",65);
    // printf("%c",97);

    char symbol;
    printf("enter a character : ");
    scanf("%c",&symbol);

    int n;
    n=symbol;
    // printf("%d",n);
    n=n-97;

    int asci = 97;
    for (int j = 0; j <= n; j++)
    {
        for (int i = 97; i <= 97+j; i++)
        {
            printf(" %c", i);
        }
        printf("\n");
    }

    // for(int i=97 ; i<=98 ; i++){
    //     printf("%c",i);
    // }
    // printf("\n");

    // for(int i=97 ; i<=99 ; i++){
    //     printf("%c",i);
    // }
    // printf("\n");

    // for(int i=97 ; i<=100 ; i++){
    //     printf("%c",i);
    // }
    // printf("\n");
}