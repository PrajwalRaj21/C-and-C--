#include<iostream>

using namespace std;

int main(){

    string color, noun, celebrity;
    cout<<"Enter the color: "<<endl;
    cin>>color;
    cout<<"Enter the noun: "<<endl;
    cin>>noun;
    cout<<"Enter the celebrity: "<<endl;
    getline(cin, celebrity);



    cout<<"Roses are "<<color<<endl;
    cout<<noun<<" are blue"<<endl;
    cout<<"I love "<<celebrity <<endl;

    return 0;
}