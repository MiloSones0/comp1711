#include <stdio.h>

struct student {
    char name [4];
    char student_id[11];
    unsigned mark;

}; 



int main() {
    struct student new_student = {};
    printf("%s\n", new_student.name);
    printf("%s\n", new_student.student_id);
    printf("%d\n", new_student.mark);
    return 0;
}