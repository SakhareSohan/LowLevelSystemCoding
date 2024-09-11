#include <stdio.h>

int main(){
    int num, temp = 1;

    printf("enter a number: \n");
    scanf("%d", &num);

    for (int i = num; i > 0; i--){
        temp = temp * i;
    }

    printf("factorial number: %d", temp);
    
    return 0;
}