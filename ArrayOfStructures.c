#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};
void initializeStructures(const char* inputString, struct Student* students, int numStudents) {
    const char* delimiter = " ";
    char* token;
    int count = 0;
    char inputCopy[100];
    strcpy(inputCopy, inputString);
    token = strtok(inputCopy, delimiter);

    while (token != NULL && count < numStudents) {
        students[count].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strcpy(students[count].name, token);

        token = strtok(NULL, delimiter);
        students[count].marks = atof(token);

        count++;

        token = strtok(NULL, delimiter);
    }
}

int main() {
    const char* inputString = "1001 Aron 100.00";
    int numStudents = 1;
    struct Student students[numStudents];

    initializeStructures(inputString, students, numStudents);

    printf("Student Details:\n");
    printf("Roll No: %d\n", students[0].rollno);
    printf("Name: %s\n", students[0].name);
    printf("Marks: %.2f\n", students[0].marks);

    return 0;
}
