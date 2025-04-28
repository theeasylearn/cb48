// // print board
// 0 | 1 | 2
// -----------
// 3 | 4 | 5
// -----------
// 6 | 7 | 8

// input move
// place move
// change sign x-o
// winner declare

#include <stdio.h>
void main()
{
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char sign = 'x';
    int n;

    while (1)
    {
        printf("\n-------------");
        printf("\n %c | %c | %c ", board[0], board[1], board[2]);
        printf("\n-------------");
        printf("\n %c | %c | %c ", board[3], board[4], board[5]);
        printf("\n-------------");
        printf("\n %c | %c | %c ", board[6], board[7], board[8]);
        printf("\n-------------");

        printf("\nenter your move : ");
        scanf("%d", &n);

        board[n] = sign;
    }

    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[0],board[1],board[2]);
    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[3],board[4],board[5]);
    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[6],board[7],board[8]);
    // printf("\n-------------");

    // sign='o';

    // printf("\nenter your move : ");
    // scanf("%d",&n);
    // board[n] = sign;

    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[0],board[1],board[2]);
    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[3],board[4],board[5]);
    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[6],board[7],board[8]);
    // printf("\n-------------");

    // sign='x';
    // printf("\nenter your move : ");
    // scanf("%d",&n);
    // board[n] = sign;

    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[0],board[1],board[2]);
    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[3],board[4],board[5]);
    // printf("\n-------------");
    // printf("\n %c | %c | %c ",board[6],board[7],board[8]);
    // printf("\n-------------");
}