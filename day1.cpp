#include <stdio.h>

void print_exponent(double double_value) {
    // Convert the double value to an unsigned char array
    unsigned char* bytes = (unsigned char*)&double_value;
    
    // Extract the exponent part from the array
    unsigned short exponent = ((unsigned short)(bytes + 6));
    
    // Print the exponent in hexadecimal format
    printf("Exponent (Hex): 0x%04X\n", exponent);
    
    // Print the exponent in binary format
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
