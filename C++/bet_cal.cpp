#include<iostream>
using namespace std;




int main(){

    double num1, num2;
    char op;

    cout<<"Enter the first number: "<<endl;
    cin>>num1;

    cout<<"Enter + or - or * or /";
    cin>>op;

    cout<<"Enter the second number: "<<endl;
    cin>>num2;

    if(op == '+'){
        cout<<"The sum is: "<<num1 + num2<<endl;
    }else if(op == '-'){
        cout<<"The difference is: "<<num1 - num2<<endl;
    }else if (op == '*'){
        cout<<"The product is: "<<num1 * num2<<endl;
    }else if (op =='/'){
        cout<< "The division is: "<<num1 /num2<<endl;


    }else{
        cout<<"invalid operator!";
    }




    return 0;
}