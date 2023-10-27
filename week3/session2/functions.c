#include <stdio.h>

void print(char * address);

int main(int argc, char *argv[]) {
    print(argv[1]);
    return 0;
}


void print(char * address) {
    for (int i = 0; i < 100; i++) {
        if( address[i] == '\0') {
            break;
        }
        printf("%c", address[i]);
    }
    printf("\n");
}
