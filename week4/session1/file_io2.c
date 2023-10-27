#include<stdio.h>

int main() {
    char filename[] = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
    }
    fprintf(file,"Hello World!\n");
    perror("");
    fclose(file);
    return 0;
}