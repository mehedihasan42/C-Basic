#include<stdio.h>

float convertFer(float cel);

int main()
{
    float fer = convertFer(0);
    printf("%f",fer);
    return 0;
}

float convertFer(float cel){
    float fer = cel*(9/5)+32;
    return fer;
}
