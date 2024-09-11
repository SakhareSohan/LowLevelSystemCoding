#include <stdio.h>

int main(){
    int num, temp = 0;

    printf("enter a num: ");
    scanf("%d", &num);

    //////////do while loop/////////
    // 1. append
    do {
        temp = temp * 10 + (num % 10);
        num = num / 10;
    } while( num > 0);

    printf("rev num: %d", temp);

    /////////do while loop//////////
    // 2. print
    
    return 0;
}