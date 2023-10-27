#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int nums[6];

    // https://stackoverflow.com/questions/822323/how-to-generate-a-random-int-in-c
    srand(time(NULL));   // Initialization, should only be called once.
    
    int duplicates[6];
    // create a array of 6 random ints between 0 and 9
    for (int i = 0; i < 6; i++) {
        nums[i] = rand() % 10; 
    }
    // check for duplicates
    int seen[6] = {0,0,0,0,0,0};
    
    for (int i = 0; i < 6; i++) {
        char found = 0;
        for (int j = 0; j < 6; j++) {
            if (nums[i] == duplicates[j]) {
                found = 1;
                seen[i] = nums[i]; 
                break;
            }
        }
        if (found == 0) {
            duplicates[i] = seen[i];
        }
        found = 0;
    }




    for (int i = 0; i <6; i++) {
        printf("%d\n", duplicates[i]);
    }
    return 0;
}