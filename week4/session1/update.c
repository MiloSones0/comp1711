#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "numbers.dat";
    FILE *file = fopen (filename, "a+");

    int buffer_size = 100;
    char line_buffer[buffer_size];
    float sum = 0;
    float count = 0;
    char end = 0;
    while (fgets(line_buffer, buffer_size, file)) {
        printf("%s\n", line_buffer);
        sum += atof(line_buffer);
        count ++;
    }
    for (int i = 0; i < 100; i ++) {
        if (line_buffer[i] == '\n') {
            fprintf(file, "%f\n", sum / count);
            fclose(file);
            exit(0);
        }

    }
    fprintf(file, "\n%f\n", sum / count);
    fclose(file);
    return 0;
}