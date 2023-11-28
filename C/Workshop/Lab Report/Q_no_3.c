//calculator using swtich case


#include<stdio.h>
#include<stdlib.h>


int calculate(int num1, int num2, char operator){
int result;
    

    switch(operator){
        case '+':
        result = num1 + num2;
        break;

        case '-':
        result = num1 - num2;
        break;


        case '*':
         result = num1 * num2;
         break;

        case '/':
         result = num1 / num2;
         break;


         default:
         printf("Invalid!");
         return 0;


    }

    return result;
};

int main(){
    int num1, num2;
    char operator;

   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);

   printf("Enter the operator (+, -, *, /): ");
   scanf(" %c", &operator);

   int result = calculate(num1, num2, operator);

   if (result != 0) {
      printf("The result is: %d", result);
   }

   return 0;
};

