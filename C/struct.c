//struct is a data structure where we can keep different data types


#include<stdio.h>
#include<stdlib.h>

struct Student{

    char name[20];
    int age;
    char class[15];
    double gpa;


};
int main(){

    struct Student student1; 
    student1.age = 22;
    student1.gpa = 3.444;
    strcpy(student1.name, "Jim");
    strcpy(student1.class, "Economics");

    printf("%s", student1.name);



    return 0;
}