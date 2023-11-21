#include<stdio.h>
#include<stdlib.h>

int main(){

    char characterName[] = "john";  //make sure to give [] when denoting a string
    int characterAge = 25;



    printf("There was a man named %s\n", characterName);  //string denoted by %s
    printf("he was only %d years old.\n", characterAge);  //integar denoted by %d

    return 0;
}