#include <stdio.h>

void print_exponent(double double_value) {
    unsigned char* bytes = (unsigned char*)&double_value;
    unsigned short exponent = ((unsigned short)(bytes + 6));
    printf("Exponent (Hex): 0x%04X\n", exponent);
    printf("Exponent (Binary): ");
    for (int i = 15; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double double_var = 1.23456e-10;
    print_exponent(double_var);
    
    return 0;
}
