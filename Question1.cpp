#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    int length;
    int width;
    int area;

    length = 15;
    width = 8;

    area = length * width;
double pricePerUnit = 2.50;

double totalPrice = area * pricePerUnit;

    cout << "Length:" << length << endl;
    cout << endl;
    cout <<  "Width:" << width << endl;
    cout << endl;
    cout <<  "Area:" << area << endl;
    cout << endl;
    cout << "Price per Unit:" << pricePerUnit << endl;
    cout << endl;
    cout << "Total Price:" << totalPrice << endl;
    cout << endl;

    return 0;

}