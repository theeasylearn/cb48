/*
    write a program to findout exponent from given base and power
    input : base = 2 power = 5 = exponent 32

    steps - 1
    1 - create variable base, power, exponent
    2 - accept input store into base  2
    3 - accept input store into power 5
    4 - exponent = base 2

    4 - multiply base with exponent, store result into exponent
    5 - decrease power by 1 4
    6 - repeat step 4 and 5 till power>=1


*/
#include <stdio.h>
void main()
{
    int base, power, exponent;
    printf("enter base");
    scanf("%d", &base);

    printf("enter power");
    scanf("%d", &power);

    exponent = base;
    do
    {
        exponent = base * exponent;
        power--;
    }while(power>=1);
    printf("%d", exponent);
}