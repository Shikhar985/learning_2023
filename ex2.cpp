#include <stdio.h>
void swap(void *a, void *b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double c = 3.14, d = 2.71828;
    printf("Before swap: c = %lf, d = %lf\n", c, d);
    swap(&c, &d, sizeof(double));
    printf("After swap: c = %lf, d = %lf\n", c, d);
    char e = 'A', f = 'B';
    printf("Before swap: e = %c, f = %c\n", e, f);
    swap(&e, &f, sizeof(char));
    printf("After swap: e = %c, f = %c\n", e, f);

    return 0;
}
