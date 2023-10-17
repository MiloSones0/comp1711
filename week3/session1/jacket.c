#include<stdio.h>

int main() {
    float temp;
    printf("What is the tempurature outside \n");
    scanf("%f", &temp);
    if (temp > 10) {
        printf("Wear a jacket\n");
    }
    else {
        printf("Wear a coat\n");
    }
    return 0;
}