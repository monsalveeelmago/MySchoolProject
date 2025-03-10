
// This program demonstrates how to use an array of structures to store a list of students and their corresponding grades
#include <stdio.h>

struct Student {
    char name[20];
    int grade;
};

int main() {
    struct Student students[] = {{"Alice", 95}, {"Bob", 85}, {"Charlie", 75}};

    for (int i = 0; i < 3; i++) {
        printf("Student %s has a grade of %d\n", students[i].name, students[i].grade);
    }

    return 0;
}