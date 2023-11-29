#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char grade;

    printf("Enter your grade(A, B or C): ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
        printf("Excellent!");
        break;

        case 'B':
        printf("Good Job Bucko!");
        break;

        case 'C':
        printf("Keep on going kid!");
        break;

        default: 
        printf("Invalid!");
        


    }

    return 0;


}
