#include <stdio.h>

int main(){
    int num, i = 0, temp = 0;

    printf("enter a number: ");
    scanf("%d", &num);

    while (i <= num){
        temp = temp + i;
        i++;
    }

    printf("sum of natural numbers: %d", temp);
    return 0;
}