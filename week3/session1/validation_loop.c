#include<stdio.h>

int main() {
    int number = 0;
    while (number != -1) {
        printf("Checks if number is in the range of 0 to 100. Use -1 to terminate\n Enter a number: ");
        scanf("%d", &number);
        if (number > 0 && number < 100) {
            printf("Number is in range\n");
        } else if (number  == -1 ) {
            printf("Termination Value entered.\n");
        }
        else {
            printf("Number is not within range.\n");
        }
    }
}