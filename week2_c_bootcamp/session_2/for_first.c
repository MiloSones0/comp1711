#include<stdio.h>

int main() {
    int a = 1;
    while(a <=256) {
        printf("a = %d\n", a);
         a++;
    }
    printf("a = %d after loop\n", a);
    return 0;
}