#include <stdio.h>

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    int y = 2;
    float z = sum(5.3, y); // calling our new function

    printf ("The sum of 5 and %d is %020.02f\n", y, z);
}