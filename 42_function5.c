// create a function that conert celcius to feenhit temperature

// 1 -> c
// 2->f
// f = (c x 1.8)+32

#include<stdio.h>

float gettemp(int choise , int temp){
    float ans;
    if(choise==1){
        ans = (temp -32) * 0.6 ;
    }
    else if(choise==2){
        ans = (temp *1.8) + 32;
    }
    else{
        ans=0;
    }

    return ans;
}

void main()
{
    // float f;
    // f = getfahrenheit(30);
    // printf("fahrenheit : %.2f",f);
    
    // f = getfahrenheit(45);
    // printf("\nfahrenheit : %.2f F",f);

    float ans;

    ans = gettemp(1,113);
    printf("%.2f",ans);

    ans = gettemp(2,45);
    printf("\n%.2f",ans);
    

}