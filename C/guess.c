#include<stdlib.h>
#include<stdio.h>

int main(){

    int SecretNumber = 7;
    int guess;

    while(guess != SecretNumber){
        printf("Enter a number: ");
        scanf("%d", &guess);

    }

    printf("You WIN!");

    
    return 0;
}