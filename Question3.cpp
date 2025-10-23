#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int age;
    int dayOfTheWeek;
    double price = 0.0;
    string ageGroup;
    string dayType;

    cout<< "Enter your age: ";
    cin>> age;

    cout<< "Enter day of week (1= Monday, 2= Tuesday, 3= Wednesday, 4= Thursday, 5= Friday, 6= Saturday, 7= Sunday):";
    cin>> dayOfTheWeek;

    if (dayOfTheWeek == 6 || dayOfTheWeek ==7)
        dayType = "Weekend";
    else if (dayOfTheWeek >= 1 && dayOfTheWeek <=5)
        dayType = "Weekday";
    else {
        cout<< "Invalid day of the week." <<endl;
        return 0;
    }
    if (age < 13){
        ageGroup = "Child";
        if (dayType == "Weekday") price =8;
        else price = 10;
    }
    else if (age >=13 && age <= 17){
        ageGroup = " Teen";
        if (dayType == "Weekday") price =10;
        else price = 13;
    }
    else  if (age >=18 && age <=64) {
        ageGroup = "Adult";
        if(dayType == "Weekday") price = 13;
        else price = 16;
    }
    else if (age >= 65){
        ageGroup = "Senior";
        if(dayType == "Weekday") price = 10;
        else price = 12;
    }
    else {
        cout<< " Invalid age" << endl;
        return 0;
    }
    cout << "Age group:"<< ageGroup <<endl;
    cout << "Day type:" << dayType <<endl;
    cout << "Ticket Price:" << price << endl;

    return 0;
}