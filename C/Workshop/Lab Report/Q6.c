#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';

    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++; // Move to the next character for the next line
    }

    return 0;
}
//wap to print the pattern using nested loop