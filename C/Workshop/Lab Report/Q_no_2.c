#include <stdio.h>

// Function to calculate the sum of digits of a number
int calculateSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n, num, sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum = calculateSum(num);
        printf("Sum of digits of %d is %d\n", num, sum);
    }

    return 0;
}