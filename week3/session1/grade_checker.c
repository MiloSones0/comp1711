#include<stdio.h>

int main() {
    float number;
    printf("Check if a grade is pass, fail or distinction.\n Enter a number: ");
    scanf("%f", &number);
    if ( number >= 70 ) {
        printf("Grade is a distinction\n");
    } else if ( number >= 50 ) {
        printf("Grade is a pass\n");
    } else {
        printf("Grade is fail\n");
    }
}