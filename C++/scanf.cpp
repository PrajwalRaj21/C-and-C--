//getting input from user


#include<iostream>
using namespace std;

int main(){
    string name;
    int age;

    cout<<"Please enter your name: ";
    getline(cin, name); //getline is used to store a string

    cout<<"Please enter your age: ";
    cin>>age;

    cout<<"Your name is "<<name<< " and you are "<<age<< " years old";
    return 0;
}