#include<stdio.h>

int main()
{
    int day;
    printf("Enter a day from 1-7:  ");
    scanf("%d",&day);

    switch(day){
        case 1: printf("This is saturday \n");
                break;
        case 2: printf("This is sunday \n");
                break;
        case 3: printf("This is monday \n");
                break;
        case 4: printf("This is tuesday \n");
                break;
        case 5: printf("This is wedday \n");
                break;
        case 6: printf("This is thursday \n");
                break;
        case 7: printf("This is friday \n");
                break;
    }
    return 0;
}
