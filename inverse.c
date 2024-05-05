#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        sum += i;
        printf("%d\n",i);
    }
     printf("%d\n",sum);
    return 0;
}
