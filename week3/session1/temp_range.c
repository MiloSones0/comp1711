#include<stdio.h>

int main() {
    float number;
    printf("Check if a tempurature is in range -10 to 40.\n Enter a number: ");
    scanf("%f", &number);
    if ( number > -10  && number < 40 ){
        printf("Tempurature is in the range.\n");
    }
    else {
        printf("Tempurature is not in the range.\n");
    }
}