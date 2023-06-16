#include <stdio.h>

int countSetBits(int arr[], int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        int num = arr[i];
        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }
    }
    
    return count;
}

int main() {
    int arr[] = {5, 10, 3, 8, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int numSetBits = countSetBits(arr, size);
    printf("Total number of set bits: %d\n", numSetBits);
    
    return 0;
}
