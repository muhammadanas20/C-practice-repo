// user authentication system by email and paassword using decision statement
#include <stdio.h>
#include <string.h>

int main() {
    char email[50];
    char password[50];
    printf("Enter your nu email: ");
    scanf("%s", email);
    if ( strcmp(email, "k250000@nu.edu.pk")==0){
        printf("Enter your password: ");
        scanf("%s", password);
        if ( strcmp(password, "Fast123")==0){
            printf("Login successful!\n");
        } else {
            printf("Incorrect password.\n");
        }
    } else {
        printf("Email not found.\n");
    }
    return 0;
}