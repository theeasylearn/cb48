// create a function for digital clock

#include <stdio.h>
#include <windows.h>

void clock()
{
    int sec = 0, min = 0, hour = 0;

    while (1)
    {
        system("cls");
        printf("********************");
        printf("\n*  DIGITAL CLOCK   *\n");
        printf("********************");

        printf("\n   %02d - %02d - %02d", sec, min, hour);

        Sleep(1000); // 1s

        sec++;

        if (sec == 60)
        {
            sec=0;
            min++;
        }
        if (min == 60)
        {
            min=0;
            hour++;
        }
        if (hour == 24)
        {
            hour = 0;
        }
    }
}

void main()
{
    clock();
}