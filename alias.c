#include<stdio.h>

struct complex{
   int real;
   int img;
};

typedef struct bankaccount{
    int accNo;
    char name[50];
}acc;

int main()
{
    /*struct complex number1 = {5,8};
    struct complex *ptr = &number1;
    printf("Real part: %d\n",ptr->real);
    printf("img part: %d\n",ptr->img);*/

    acc acc1 = {1223,"Mehedi"};
    acc acc2 = {1224,"hasan"};
    acc acc3 = {1225,"rakib"};
    acc acc4 = {1226,"hasnat"};

    printf("Your acc no: %d\n",acc1.accNo);
    printf("Your acc name: %s",acc1.name);

    return 0;
}
