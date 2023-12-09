#include<iostream>
using namespace std;

int main(){


    string phrase = "Hello, How are you?";
    phrase[0] = 'B'; //changes H to B


    cout<<"Giraffe Academy\n";
    cout<<"Hello\n";
    cout<<phrase <<endl;
    cout<<phrase.length()<<endl;  //prints out lenght of the phrase
    cout<<phrase[0] <<endl;  //prints out the first character
    cout<<phrase.find("Bello", 0);


    return 0;

}