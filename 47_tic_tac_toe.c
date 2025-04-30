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

void printboard(char board[9])
{

    printf("\n-------------");
    printf("\n %c | %c | %c ", board[0], board[1], board[2]);
    printf("\n-------------");
    printf("\n %c | %c | %c ", board[3], board[4], board[5]);
    printf("\n-------------");
    printf("\n %c | %c | %c ", board[6], board[7], board[8]);
    printf("\n-------------\n");
}

int check(char sy,char board[9])
{
    int count=0;
    if(board[0]==sy && board[1]==sy && board[2]==sy){
        printboard(board);
        printf("%c is winner",sy);
        count=1;
        
    }
    
    else if(board[3]==sy && board[4]==sy && board[5]==sy){
        printboard(board);
        printf("%c is winner",sy);
        count=1;
    
    }
    
    else if(board[6]==sy && board[7]==sy && board[8]==sy){
        printboard(board);
        printf("%c is winner",sy);
        count=1;
    }
    
    else if(board[0]==sy && board[3]==sy && board[6]==sy){
        printboard(board);
        printf("%c is winner",sy);
        count=1;
    }
    
    else if(board[1]==sy && board[4]==sy && board[7]==sy){
        printboard(board);
        printf("%c is winner",sy);
        count=1;
    
    }
    
    else if(board[2]==sy && board[5]==sy && board[8]==sy){
        printboard(board);
        printf("%c is winner",sy);
        count=1;
    
    }
    
    else if(board[0]==sy && board[4]==sy && board[8]==sy){
        printboard(board);
        printf("%c is winner",sy);
        count=1;
    
    }
    else if(board[2]==sy && board[4]==sy && board[6]==sy){
        printboard(board);
        printf("%c is winner",sy);
        count=1;
    
    }

    return count;
}


void main()
{
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char sign = 'x';
    int n;

    while (1)
    {
        printboard(board);

        printf("\nenter your move : ");
        scanf("%d", &n);

        if (board[n] == ' ')
        {
            board[n] = sign;
            if (sign == 'x')
            {
                sign = 'o';
            }
            else
            {
                sign = 'x';
            }
        }

        
        if(check('x',board) == 1)
        {
            break;
        }

        else if(check('o',board) == 1){
            break;
        }
        
        else{
            if(board[0]!=' ' && board[1]!=' ' && board[2]!=' '  && board[3]!=' '  && board[4]!=' ' && board[5]!=' ' && board[6]!=' '  && board[7]!=' ' && board[8]!=' ' )
            {
                printboard(board);
                printf("draw");
                break;
            }
            
            
        }


       

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