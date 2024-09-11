#include <stdio.h>

int main(){
    int num;

    printf("enter a number: ");
    int result = scanf("%d", &num); // check if scanf gets what is expected

    if (result == 1){
        if (num == 0){
            printf("Entered number is 0");
        } else if ( num < 0 ){
                printf("Entered number is negative");
            } else {
                printf("Entered number is positive");
            }
    } else {
        printf("invalid number");
    }

    return 0;
}