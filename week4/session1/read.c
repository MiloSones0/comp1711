#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "squares.dat";
    FILE *file = fopen (filename, "r");

    int buffer_size = 100;
    char line_buffer[buffer_size];
    float sum = 0;
    int count = 0;

    while (fgets(line_buffer, buffer_size, file)) {
        sum += atoi(line_buffer);
        count ++;
    }
    printf("%f\n", sum / (count-1));
    fclose(file);
    return 0;
}