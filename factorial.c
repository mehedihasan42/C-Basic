#include<stdio.h>

int fact(int n);

int main(){
   printf("Factorial is: %d",fact(4));
   return 0;
}

int fact(int n){
    if(n == 0)
        return 1;
    int factNum1 = fact(n-1);
    int factNum = factNum1*n;
    return factNum;
}
