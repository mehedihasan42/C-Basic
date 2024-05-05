#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a letter: \n");
    scanf("%c",&ch);

    if(ch >= 'a' & ch <= 'z')
        printf("lower case");
    else if(ch >= 'A' & ch <= 'Z')
        printf("Upper case");
    else
        printf("This is not a letter");

    return 0;
}
