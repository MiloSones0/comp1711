#include<stdio.h>

int main() {
    char filename[] = "squares.dat";
    FILE *file = fopen (filename, "w");
    int n;
    printf("Enter a number to be squared up to: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        fprintf(file, "%d\n", i*i);
    }
    fclose(file);
    return 0;
}