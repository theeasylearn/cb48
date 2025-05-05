// 8) write a program to accept birth date and month from user. decide zodiac sign from below table
// Aries: March 21–April 19
// Taurus: April 20–May 20
// Gemini: May 21–June 21
// Cancer: June 22–July 22
// Leo: July 23–August 22
// Virgo: August 23–September 22
// Libra: September 23–October 22
// Scorpio: October 24–November 21
// Sagittarius: November 22–December 21
// Capricorn: December 22–January 19
// Aquarius: January 20–February 18
// Pisces: February 19–March 20

// 9) write a program to accept birth date and month of male & female. generate & display Zodiac Compatibility for marriage.
// use below image
// https://asknebula.com/images/zodiac-compatibility/zodiac-compatibility-chart.png

// 1) input date and month
// 2) find zodiac sign 2
// 3) get message

#include <stdio.h>
char *sign[12] = {
    "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo",
    "Libra", "Scorpio", "Sagittarius", "Capricorn", "Aquarius", "Pisces"};

// heart=2 , normal = 1 ,weel =0
char compare_sign[12][12] = {
    // Aries
    {'g','n','g','n','g','f','g','f','f','f','g','n'},
    // Taurus
    {'n','f','n','g','f','g','f','g','n','g','f','g'},
    // Gemini
    {'g','n','f','f','g','f','g','n','f','g','g','n'},
    // Cancer
    {'n','g','f','g','n','g','f','g','f','g','f','g'},
    // Leo
    {'g','f','g','n','g','f','g','f','g','n','g','f'},
    // Virgo
    {'f','g','f','g','f','g','f','g','n','g','f','g'},
    // Libra
    {'g','f','g','f','g','f','g','f','g','f','g','f'},
    // Scorpio
    {'f','g','n','g','f','g','f','g','f','g','f','g'},
    // Sagittarius
    {'f','n','f','f','g','n','g','f','g','f','g','n'},
    // Capricorn
    {'f','g','f','g','n','g','f','g','f','g','f','g'},
    // Aquarius
    {'g','f','g','n','g','f','g','f','g','f','g','f'},
    // Pisces
    {'n','g','n','g','f','g','f','g','n','g','f','g'}
};

int getzodiac(int d, int m)
{

    if ((d >= 21 && m == 3) || (d <= 19 && m == 4))
    {
        return 0; // Aries
    }
    else if ((d >= 20 && m == 4) || (d <= 20 && m == 5))
    {
        return 1; // Taurus
    }
    else if ((d >= 21 && m == 5) || (d <= 21 && m == 6))
    {
        return 2; // Gemini
    }
    else if ((d >= 22 && m == 6) || (d <= 22 && m == 7))
    {
        return 3; // Cancer
    }
    else if ((d >= 23 && m == 7) || (d <= 22 && m == 8))
    {
        return 4; // Leo
    }
    else if ((d >= 23 && m == 8) || (d <= 22 && m == 9))
    {
        return 5; // Virgo
    }
    else if ((d >= 23 && m == 9) || (d <= 22 && m == 10))
    {
        return 6; // Libra
    }
    else if ((d >= 23 && m == 10) || (d <= 21 && m == 11))
    {
        return 7; // Scorpio
    }
    else if ((d >= 22 && m == 11) || (d <= 21 && m == 12))
    {
        return 8; // Sagittarius
    }
    else if ((d >= 22 && m == 12) || (d <= 19 && m == 1))
    {
        return 9; // Capricorn
    }
    else if ((d >= 20 && m == 1) || (d <= 18 && m == 2))
    {
        return 10; // Aquarius
    }
    else if ((d >= 19 && m == 2) || (d <= 20 && m == 3))
    {
        return 11; // Pisces
    }
   
}

void main()
{
    int m_date, f_date, m_month, f_month, m,f;

    printf("enter male date & month(dd mm) : ");
    scanf("%d %d", &m_date, &m_month);

    printf("enter female date & month(dd mm) : ");
    scanf("%d %d", &f_date, &f_month);

    if ((m_date > 0 && m_date < 32 && m_month > 0 && m_month < 13) && ((f_date > 0 && f_date < 32 && f_month > 0 && f_month < 13)))
    {

        // printf("%d",getzodiac(m_date,m_month));
        // printf("%s",sign[0]);
        m =getzodiac(m_date,m_month);
        f =getzodiac(f_date,f_month);
        printf("Male zodiac Sign : %s",sign[m]);
        printf("\nFemale zodiac Sign : %s",sign[f]);

        // printf("\n%c",compare_sign[m][f]);

        if(compare_sign[m][f] == 'g'){
            printf("\ngreate match");
        }
        else if(compare_sign[m][f] == 'f'){
            printf("\nfavourite match");
        }
        else if(compare_sign[m][f]=='n'){
            printf("\nnot favouritable");
        }
    }
    else
    {
        printf("Invalid date or Month");
    }
}