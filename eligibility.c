#include <stdio.h>
#include <string.h>
 
int main(){
    int userAge;
    char userNationality[50];
    printf("Enter your age: ");
    scanf("%d", &userAge);
   
    if (userAge >= 18){
     printf("Enter your nationality: ");
    scanf("%s", userNationality);
        if (strcmp(userNationality, "pakistani") == 0){
            printf("You are eligible.\n");
        } else {
            printf("you are not eligible.\n");
        }
    } else {
        printf("You are not eligible.\n");
    }
        return 0;
}