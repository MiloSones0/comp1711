#include<stdio.h>

int main() {
    int nums[] = {3,6,3,8,1};
    int total = 0;
    for (int i = 0; i <=4; i++) {
        total += nums[i];
    }
    printf("%d\n", total);
    return 0;
}