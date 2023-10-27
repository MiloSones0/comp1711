#include<stdio.h>

int isPrime(int);

int main() {
    int num = 50;
    printf("%d\n", isPrime(num));
}

int isPrime(int num) {for (int i = 2; i < num; i++) {if (num % i == 0) return 0;} return 1;}