#include <stdio.h>
#include <string.h>

void rotateStringLeft(char* str, int positions) {
    int length = strlen(str);
    positions = positions % length;
    for (int i = 0; i < positions; i++) {
        char temp = str[0];
        for (int j = 0; j < length - 1; j++) {
            str[j] = str[j + 1];
        }
        str[length - 1] = temp;
    }
}

int main() {
    char str[] = "Hello World!";
    int positions = 3;
    
    printf("Original string: %s\n", str);
    
    rotateStringLeft(str, positions);
    
    printf("Rotated string (left %d positions): %s\n", positions, str);
    
    return 0;
}
