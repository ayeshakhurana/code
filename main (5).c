//write a code to check if there is any duplicate element in an array 
#include <stdio.h>
int hasDuplicates(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (hasDuplicates(arr, size)) {
        printf("Array has duplicates.\n");
    } else {
        printf("Array does not have duplicates.\n");
    }

    int arr2[] = {1, 2, 3, 3, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (hasDuplicates(arr2, size2)) {
        printf("Array2 has duplicates.\n");
    } else {
        printf("Array2 does not have duplicates.\n");
    }

    return 0;
}
