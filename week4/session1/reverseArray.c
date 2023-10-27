#include<stdio.h>

void reverseArray(int *, int);

int main() {
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]) - 1;
    reverseArray(arr, length);
    for (int i= 0; i < 5; i++) {
        printf("%d,",arr[i]);
    }
    printf("\n");
    return 0;
}

void reverseArray(int * arr, int length) {
    for (int i = 0; i < length/2; i++) {
        int temp = arr[i];
        arr[i] = arr[length - i];
        arr[length - i] = temp;
    }
}