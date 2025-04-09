/* 
    write a program to findout given character is vowel or not 
    input : a output : vowel
    input : b output : it is not vowel

    steps 
    1 - create variable character 
    2 - check given character is vowel or not 
        if vowel print, print message it is vowel
        else  print, print message it is not vowel

*/
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter letter");
    scanf("%c",&letter);

    switch(letter)
    {
        case 'a':
        case 'A':
        printf("it is a and it is vowel");
        break;

        case 'e':
        case 'E':
        printf("it is e and it is vowel");
        break;

        case 'i':
        case 'I':
        printf("it is i and it is vowel");
        break;

        case 'o':
        case 'O':
        printf("it is o and it is vowel");
        break;

        case 'u':
        case 'U':
        printf("it is u and it is vowel");
        break;
        
        default:
        printf("it is not vowel");
        break;
    }
}   
