#include <stdio.h>

int main() {
    int n, num = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Triangular numbers from 1 to %d are: ", n);

    while (num <= n) {
        num = num + i;
        i++;
        if (num <= n) {
            printf("%d ", num);
        }
    }

    return 0;
}