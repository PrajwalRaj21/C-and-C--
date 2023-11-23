#include <stdio.h>
// this program adds all the number from 1 to 10 using for  loop




int main() {
    int sum = 0;

    for(int i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("The sum from numbers 1 to 10 is: %d\n", sum);

    return 0;
}