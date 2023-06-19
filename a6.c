#include <stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {30, 40, 10, 60, 50, 20, 70, 90, 80, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int index = linearSearch(arr, n, target);
    if (index == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", index);
    }
    return 0;
}