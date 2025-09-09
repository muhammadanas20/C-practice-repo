#include <stdio.h>
// Checking if the number input by user is 0 or not. If it's 0 then print Zero else print non-zero
int main(){
     int number;
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number == 0){
            printf("Zero\n");
        } else {
            printf("Non-zero\n");
        }
    return 0;
}