#include<stdio.h>

int main()
{
    int x;
    printf("Enter a value: ");
    scanf("%d",&x);

    if(x%2 == 0)
        printf("This is a even number");
    else printf("This is a odd number");

    return 0;
}
