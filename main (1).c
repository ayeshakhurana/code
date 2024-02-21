//write a code to print sum of each element of an array using functions
#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void sumOfDigitsInArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int sum = sumOfDigits(arr[i]);
        printf("Sum of digits of %d: %d\n", arr[i], sum);
    }
}

int main() {
    int arr[] = {123, 456, 789};
    int size = sizeof(arr) / sizeof(arr[0]);
    sumOfDigitsInArray(arr, size);
    return 0;
}
