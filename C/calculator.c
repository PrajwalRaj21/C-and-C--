#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Enter the first number: ");
    int num1, num2;

    scanf("%f", &num1);
    printf("Enter the second nnumber: ");
    scanf("%f", &num2);

    printf("Answer: %f", num1 + num2);

    return 0;


}