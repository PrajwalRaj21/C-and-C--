#include<stdio.h>
#include<stdlib.h>


int main(){

    char color[10];
    char noun[20];
    char name[20];
    
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a noun: ");
    scanf("%s", noun);
    printf("Enter a name: ");
    scanf("%s", name);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", noun);
    printf("I love %s", name);


    return 0;

}