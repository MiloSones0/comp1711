#include<stdio.h>

int main() {
    int number;
    printf("Check if a number is divisable by 4 and 5.\n Enter a number: ");
    scanf("%d", &number);
    if ( number % 4 == 0 && number % 5 == 0 ){
        printf("Number is divisable by both 4 and 5\n");
    }
    else {
        printf("Number is not divisable by both 4 and 5\n");
    }
}