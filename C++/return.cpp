#include<iostream>
using namespace std;


int cube(double num){
    double result = num * num * num;
    return result;


}

int main(){
    int answer = cube(5);

    cout<<answer;


    return 0;

    


}