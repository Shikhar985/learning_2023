#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
void swapStructures(struct Student* s1, struct Student* s2) {
    struct Student temp;
    strcpy(temp.name, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, temp.name);
    int rollNumberTemp = s1->rollNumber;
    s1->rollNumber = s2->rollNumber;
    s2->rollNumber = rollNumberTemp;
    float marksTemp = s1->marks;
    s1->marks = s2->marks;
    s2->marks = marksTemp;
}

int main() {
    struct Student student1 = {"John", 1, 95.5};
    struct Student student2 = {"Alice", 2, 88.5};

    printf("Before swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);
    printf("\n");
    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Marks: %.2f\n", student2.marks);
    printf("\n");
    swapStructures(&student1, &student2);
    printf("After swapping:\n");
    printf("Student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);
    printf("\n");
    printf("Student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Roll Number: %d\n", student2.rollNumber);
    printf("Marks: %.2f\n", student2.marks);

    return 0;
}
