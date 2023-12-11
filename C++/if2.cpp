#include<iostream>
using namespace std;

int maxNumber(double num1, double num2){
    int result;

    if(num1 > num2){
        result = num1;

    }else{
        result = num2;
    }

    return result;
}

int main(){

cout<<maxNumber(2, 4);
return 0;
}
