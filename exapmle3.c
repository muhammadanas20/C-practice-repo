#include <stdio.h>
// Check if one number is greater than the other.
int main(){
    int numberOne;
    int numberTwo;
    printf("Enter first number: ");
    scanf("%d", &numberOne);
    printf("Enter second number: ");
    scanf("%d", &numberTwo);
    if (numberOne > numberTwo){
        printf("%d is greater than %d\n", numberOne, numberTwo);
    } else {
        printf("%d is not greater than %d\n", numberOne, numberTwo);
    }
    return 0;
}