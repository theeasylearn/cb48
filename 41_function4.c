// create a function that take 2 arguments numbers
// start , end
// 1<10

// 1 x 1 = 1
// 1 x 2 = 2

#include <stdio.h>

void printtable(int start,int end){

    int ans;

    if(start<end)
    {
        //accending table  1 10
        printf("accending order\n");
        while (start<=end)
        {
            for (int i = 1; i <= 10; i++)
            {
                // count++;
                ans = start * i;
                printf("\n%d x %d = %d", start, i, ans);
            }

            printf("\n----------------\n");
            
            start++;
        }
    }
    else{
        //decending table   10 1
        printf("deccending order\n");
        while (start>=end)
        {
            for (int i = 1; i <= 10; i++)
            {
                // count++;
                ans = start * i;
                printf("\n%d x %d = %d", start, i, ans);
            }

            printf("\n----------------\n");

            start--;
        }
    }
}

void main()
{
    printtable(2,5);
    printtable(10,5);
    printtable(2,1);

    // for (int i = 1; i <= 10; i++)
    // {
    //     // count++;
    //     ans = number * i;
    //     printf("\n%d x %d = %d", number, i, ans);
    // }

    // printf("\n----------------\n");

    // number++;
    // for (int i = 1; i <= 10; i++)
    // {
    //     // count++;
    //     ans = number * i;
    //     printf("\n%d x %d = %d", number, i, ans);
    // }

    // count++;
    // ans = number*count;
    // printf("\n%d x %d = %d",number,count,ans );

    // count++;
    // ans = number*count;
    // printf("\n%d x %d = %d",number,count,ans );

    // count++;
    // ans = number*count;
    // printf("\n%d x %d = %d",number,count,ans );
}