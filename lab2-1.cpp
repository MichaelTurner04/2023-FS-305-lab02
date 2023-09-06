// Programmer: Michael Turner
// Student ID: 18229090
// Section: 305
// Date: 9/6/2023
// File: lab2-1
// Purpose: Program that gives a restaurant rating.

#include <iostream>
using namespace std;

int main(){
int visits; //declaration of visits
int media; //declaration of media posts
int menu; //declaration of number of menu items
float avgPrice; //declaration of average price
float rating; //declaration of final rating
cout << "Insert number of visits your restuarant recieves per week: " ;
cin >> visits; //get user input about visits
cout << "Insert number of social media tags your restuarant recieves per week: ";
cin >> media; //get user input about media tags
cout << "How many menu items? ";
cin >> menu; //get user input about menu
cout << "What is the average price of a menu item? ";
cin >> avgPrice; //get user input about avgPrice
rating = visits + media + (menu * avgPrice); //Algorithm for the rating of the restuarant
cout << "The rating of the restuarant is: " << rating << endl;
return 0;
}
