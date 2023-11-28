#include<stdio.h>
#include<stdlib.h>

int main(){
    int division;

    printf("Enter your division: ");
    scanf("%f", &division);

    if(division >80)
    {
        printf("You have passed with distinction\n");

    }else if (division >=60)

    {
        printf("You have passed with first division.\n");
    
    
    }else if (division >=50)

    {
        printf("You have passed with second division.\n");
    
    
    }else if (division >=40)

    {
        printf("You have passed with third division.\n");

    } else{
        printf("You have failed! Try better next time\n");
    }

    return 0;

    
}