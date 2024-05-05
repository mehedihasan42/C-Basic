#include<stdio.h>

int printOdd(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7};
    printf("%d", printOdd(arr, 6));
    return 0;
}

int printOdd(int arr[], int n) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 1) {
            count++;
        }
    }
    return count;
}


/*
 char star = "*";
    char *ptr = &star;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    ptr--;
    printf("ptr = %u\n",ptr);

*/

/*
int age = 24;
    int _age = 22;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("Difference: %u\n",ptr-_ptr);
*/

/*
 int aadhar[5];
    int *ptr = &aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index: ",i);
        scanf("%d",&aadhar[i]);
    }

    for(int i=0;i<5;i++){
        printf("%d index = %d \n",i,aadhar[i]);
    }
*/
