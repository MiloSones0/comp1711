#include<stdio.h>

float circleArea(float radius);

int main() {
    float radius;
    printf("Calcuate area of circle enter radius: ");
    scanf("%f", &radius);
    printf("Area of circle is %f\n", circleArea(radius));
}

float circleArea(float radius) {
    return radius * radius * 3.14;
}