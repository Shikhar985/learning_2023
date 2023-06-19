#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int evenSum = 0;
    int oddSum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    int difference = evenSum - oddSum;
    printf("Sum of even elements: %d\n", evenSum);
    printf("Sum of odd elements: %d\n", oddSum);
    printf("Difference: %d\n", difference);
    return 0;
}