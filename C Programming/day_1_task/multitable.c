#include <stdio.h>

int main(){
    int num;
    printf("enter a number: \n");
    scanf("%d", &num);

    printf("Table of %d is as follows: \n", num);
    for (int i = 1; i < 11; i++){
        printf("%d * %d = %d \n", num, i, num * i);
    }

    return 0;
}