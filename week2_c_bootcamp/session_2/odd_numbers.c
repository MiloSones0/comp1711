#include<stdio.h>

int main(){
    int number = 1;
    for (int counter = 0;counter < 11; counter++) {
        printf("%d\n", number);
        number +=2;
    }
    return 0;
}