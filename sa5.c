#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
void searchByName(const struct Student* students, int numStudents, const char* name) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student Found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");

            found = 1;
        }
    }
    if (!found) {
        printf("Student Not Found.\n");
    }
}

int main() {
    int numStudents = 5;
    struct Student students[numStudents] = {
        {1001, "Shikhar", 85.5},
        {1002, "devanshh", 92.0},
        {1003, "Gajanan", 78.5},
        {1004, "Neeraj", 90.5},
        {1005, "tushar", 88.0}
    };

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);
    searchByName(students, numStudents, searchName);

    return 0;
}
