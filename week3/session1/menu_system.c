#include<stdio.h>

int main() {
    int number;
    printf("Choose menu option (0-4).\n Enter a number: ");
    scanf("%d", &number);
    switch (number)
    {
    case 0:
        printf("Menu item 0 was selected.\n");
        break;
    case 1:
        printf("Menu item 1 was selected.\n");
        break;
    case 2:
        printf("Menu item 2 was selected.\n");
        break;
    case 3:
        printf("Menu item 3 was selected.\n");
        break;
    case 4:
        printf("Menu item 4 was selected.\n");
        break;
    default:
        printf("Not a valid selection\n");
        break;
    }
}