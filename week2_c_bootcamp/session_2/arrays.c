#include<stdio.h>

int main() {
    int n = 10;
    int array[n];
    for (int i = 0; i< n+1000; i++) {
        array[i] = 10 * i + i;
    }
    for (int i = 0; i< n+1000; i++) {
        printf("%d\n",array[i]);
    }
}

