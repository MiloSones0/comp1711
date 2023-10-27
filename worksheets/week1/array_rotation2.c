#include<stdio.h>

int main() {
    int nums[] = {3,6,3,8,1};

    int rotated[5];
    for (int i = 0; i <=4; i++) {
        rotated[(i+1)%5] = nums[i];
        printf("rotated(i+1)/5 %d  ", (i+1)%5);
        printf("nums[i] %d\n", i);
    }
    for (int i = 0; i <=4; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");
    return 0;
}