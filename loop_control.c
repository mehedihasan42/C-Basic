#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum += i;
    }
    printf("Total is %d",sum);
    return 0;
}

/*
  for(int i=0;i<10;i++)
    {
        printf("Hello world \n");
    }
*/

/*
 for(int i=0;i<100;i++)
    {
        printf("%d \n",i);
    }
*/
  /*
    int i = 5;
    do{
        printf("%d\n",i);
        i--;
    }while(i>=1);
    */
    /*
    while(i<10){
        printf("Hello world\n");
        i++;
    }
    */
