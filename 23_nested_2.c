/*
    write a program to findout profit or loss amount from given cost price and sale price
    steps
    1 - create variable cost_price,sale_price,difference
    2 - accept cost price & store in cost_price variable
    3 - accept sale_price & store in sale_price variable
    4 - find difference between sale_price & cost price
        difference = sale_price - cost_price
    5 - calculate profit or loss
        if difference is above 0
            display difference as profit
        otherwise
            display difference as loss
*/
#include <stdio.h>
void main()
{
    int cost_price, sale_price, difference;
    printf("Enter cost price of product");
    scanf("%d", &cost_price);

    printf("Enter sales price of product");
    scanf("%d", &sale_price);

    difference = sale_price - cost_price;
    if (difference == 0)
    {
        printf("\n no profit, no loss");
    }
    else
    {
        if (difference > 0)
        {
            printf("profit = %d", difference);
        }
        else
        {
            printf("loss = %d", difference);
        }
    }
}