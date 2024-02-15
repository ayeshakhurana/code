
#include <stdio.h>

int sum(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return sum(a ^ b, (a & b) << 1);
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", sum(num1, num2));
    return 0;

}
