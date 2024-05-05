#include<stdio.h>

int main()
{
    float price[3];
    printf("Enter three product price: ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);

    printf("Price 1 with 16 percent gst %f\n",price[0]+(price[0]*0.16));
    printf("Price 2 with 16 percent gst %f \n",price[1]+(price[1]*0.16));
    printf("Price 3 with 16 percent gst %f\n",price[2]+(price[2]*0.16));
    return 0;
}

/*
 int marks[3];
    printf("Enter phys marks: ");
    scanf("%d",&marks[0]);

    printf("Enter che marks: ");
    scanf("%d",&marks[1]);

    printf("Enter math marks: ");
    scanf("%d",&marks[2]);

    printf("Phys = %d, che = %d, math = %d",marks[0],marks[1],marks[2]);
    */
