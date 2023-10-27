#include<stdio.h>

int main() {
    int nums[] = {3,6,3,8,1};

    int reversed[5];
    for (int i = 0; i <=4; i++) {
        reversed[4-i] = nums[i];
    }
    for (int i = 0; i <=4; i++) {
        printf("%d\n", reversed[i]);
    }
    return 0;
}