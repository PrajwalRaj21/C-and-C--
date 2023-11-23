//constants cannot be modified


#include<stdio.h>

int main(){
    const int num = 10;

    printf("%d", num);

    //num = 5;
    //printf("%d", num); //this will not be printed as the num = 10 is constant

    return 0;
}