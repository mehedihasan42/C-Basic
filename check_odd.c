#include<stdio.h>

int main()
{
    int i=2;
    do{
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n%2 != 0){
            printf("This is odd number and this program is terminate permanently");
            break;
        }
    }while(i<100);

    return 0;
}
