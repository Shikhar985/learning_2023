#include <stdio.h>

void toggleCase(char* str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        } else if (*str >= 'A' && *str <= 'Z') {
            *str = *str - 'A' + 'a';
        }
        str++;
    }
}

int main() {
    char str[] = "Hello World!";
    printf("Original string: %s\n", str);
    
    toggleCase(str);
    printf("Toggled case string: %s\n", str);
    
    return 0;
}
