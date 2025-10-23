#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int score;
    char grade;
    string passingStatus;

    cout << "Enter your score:";
    cin >> score;

    if (score >= 90 && score <=100)
       grade = 'A';
    else if (score >=80 && score <=89)
       grade = 'B';
    else if (score >= 70 && score <= 79)
       grade = 'C';
    else if (score >= 60 && score <=69)
       grade = 'D';
    else
       grade = 'F';

    if (score >=60)
       passingStatus = "Passing";
    else 
       passingStatus = "Failing";
       
    cout << "Letter Grade:" << grade << endl;
    cout << "Passing Status:" << passingStatus << endl;

    return 0;
}