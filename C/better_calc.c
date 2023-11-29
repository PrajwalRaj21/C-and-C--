#include<stdio.h>
#include<stdlib.h>

int main(){

    double  num1, num2;
    char operators;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator: ");
    scanf(" %c", &operators);


    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if(operators == '+'){
        printf("The sum is: %f", num1 + num2);
    } else if (operators == '-'){
        printf("The difference is %f", num1 - num2);
    } else if (operators == '*'){
        printf("The total is: %f", num1 * num2);
    }else if(operators =='/'){
        printf("The division is: %d", num1 / num2);
    }else{
        printf("Invalid Operator!");
    }







    return 0;
}