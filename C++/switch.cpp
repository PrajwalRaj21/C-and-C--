#include<iostream>
using namespace std;

string getDayofWeek(int dayNum)
{
    string dayName;
    return dayName;

    switch(dayNum){
        case 1:
        dayName = "Sunday";
        break;
        case 2:
        dayName = "Monday";
        break;
        case 3:
        dayName = "Tuesday";
        break;
        case 4:
        dayName = "Wednesday";
        break;
        case 5:
        dayName = "Thrusday";
        break;
        case 6:
        dayName = "Friday";
        break;
        case 7:
        dayName = "Saturday";
        break;

        default:
        dayName = "Invalid";
        

    }

    return dayName;



}


int main(){
    cout<<getDayofWeek(6);
    return 0;

}