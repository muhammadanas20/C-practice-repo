#include <stdio.h>
// Check if a number is positive, negative, or zero.
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0){
        printf("Positive\n");
    } else if (number < 0){
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }
    return 0;
}