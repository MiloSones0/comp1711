#include<stdio.h>

int main() {
    int nums[] = {3,6,3,8,1};

    int highest = nums[0];
    for (int i = 0; i <=4; i++) {
        if (nums[i] > highest) {
            highest = nums[i];
        }
    }
    printf("%d\n", highest);
    return 0;
}