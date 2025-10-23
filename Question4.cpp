//question 4 
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main (){
    int menuChoice; //declare an integer value
    char size; //character variable
    double price = 0.0;
    string item;

    cout<< "Menu:" << endl;
    cout<< "1- Pizza - $10" << endl;
    cout<< "2- Burger - $8" << endl;
    cout<< "3- Pasta - $12" << endl;
    cout<< "4- Salad - $7" << endl;
    cout<< "5- Sandwich - $6" << endl;
    cout<< "Enter your menu choice (1-5)";
    cin>> menuChoice;

    cout<<  "Enter size (S,M, or L)";
    cin>> size;

    switch(menuChoice){
    case 1:
        item = "Pizza";
        price = 10;
        break;
    case 2:
         item = "Burger";
         price = 8;
         break;
    case 3:
        item = "Pasta";
        price = 12;
        break;
    case 4:
         item = "Salad";
         price = 7;
         break;
    case 5:
        item = "Sandwich";
        price = 6;
        break;
    default:
        cout<< "Invalid menu choice" << endl;
        return 0;
    }
    if (size == 'S'|| size == 's'){
        price *=1.0;
    } else if (size == 'M'|| size == 'm'){
    price *=1.5;
    } else if (size =='L'|| size == 'l'){
        price *=2.0;
    } else {
        cout<< "Invalid size" << endl; 
        return 0; 
    }
     cout << "\nItem: " << item << "\nSize: " << size << "\nFinal Price: $" << price << endl;
    return 0;

}

