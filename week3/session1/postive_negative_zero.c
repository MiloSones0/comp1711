#include<stdio.h>

int main() {
    float number;
    printf("Check if a number is postive, negative or zero.\n Enter a number: ");
    scanf("%f", &number);
    if ( number == 0 ) {
        printf("Number is zero\n");
    } else if ( number > 0 ) {
        printf("Number is postive\n");
    } else {
        printf("Number is negative\n");
    }
}