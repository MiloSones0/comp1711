#include<stdio.h>

int str_len(char *string);

int main() {
    char string[] = "Hello World!";
    printf("The string is %d charaters long\n", str_len(string));
}

int str_len(char* string) {
    int i = 0;
    while(1) {
        if (string[i] == '\0') {
                return i;
        }
        i++;
    }

}