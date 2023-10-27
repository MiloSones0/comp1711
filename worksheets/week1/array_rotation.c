#include<stdio.h>

int main() {
    int nums[] = {3,6,3,8,1};

    int rotated[5];
    for (int i = 0; i <=4; i++) {
        if (i != 4) {
            rotated[i+1] = nums[i];
        }
        else {
            rotated[0] = nums[i];
        }

    }
    for (int i = 0; i <=4; i++) {
        printf("%d\n", rotated[i]);
    }
    return 0;
}