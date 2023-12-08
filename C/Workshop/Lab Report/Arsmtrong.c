#include <stdio.h>


// Function to check Armstrong number
int checkArmstrong(int number) {
   int original, remainder, n = 0;
   original = number;

   while (original != 0) {
       original /= 10;
       ++n;
   }

   original = number;
   int sum = 0;

   while (original != 0) {
       remainder = original % 10;
       sum += pow(remainder, n);
       original /= 10;
   }

   if (sum == number)
       return 1;
   else
       return 0;
}

// Function to check perfect number
int checkPerfect(int number) {
   int sum = 1;

   for (int i = 2; i <= sqrt(number); i++) {
       if (number % i == 0) {
           if (number / i == i)
               sum = sum + i;
           else
               sum = sum + i + number / i;
       }
   }

   if (sum == number && number != 1)
       return 1;
   else
       return 0;
}

int main() {
   int number;
   printf("Enter a number: ");
   scanf("%d", &number);

   if (checkArmstrong(number))
       printf("%d is an Armstrong number.\n", number);
   else
       printf("%d is not an Armstrong number.\n", number);

   if (checkPerfect(number))
       printf("%d is a perfect number.\n", number);
   else
       printf("%d is not a perfect number.\n", number);

   return 0;
}