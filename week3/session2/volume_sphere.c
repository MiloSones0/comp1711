#include<stdio.h>
#include<math.h>

float sphereVolume(float radius);


int main() {
    float radius;
    printf("Calcuate volume of sphere enter radius: ");
    scanf("%f", &radius);
    printf("Volume of sphere is %f\n", sphereVolume(radius));
}

float sphereVolume(float radius) {
    return pow(radius,3) * 3.14 * 4/3;
}