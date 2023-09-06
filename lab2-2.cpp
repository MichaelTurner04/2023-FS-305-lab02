// Programmer: Michael Turner
// Student ID: 18229090
// Section: 305
// Date: 9/6/2023
// File: lab2-2
// Purpose: pragram that calcualtes and displays various conversions and calculations based on user input for a given distance in miles.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
float miles;
float kilometers;
float timeDistance;
float footballFields;
double areaSquare;
float circumferenceCircle;

cout << "Insert number of miles: ";
cin >> miles;//get user input for miles
kilometers = miles * 1.60934; //converting miles to kilometers
timeDistance = miles / 60; //calculating time it takes to travel
footballFields = miles * 1760 / 100; //calclulates number of football fields
areaSquare = kilometers * kilometers; //calculates the area of a square using the distance as the sides
circumferenceCircle = 2 * M_PI * (kilometers / 2); //finds the circumference of the circle with the data for kilometers

cout << "Distance in kilometers: " << kilometers << endl;
cout << "Time to cover the disatace at 60 miles per hour: " << timeDistance << endl;
cout << "Equivalent number of football fields: " << footballFields << endl;
cout << "Area of a square with side length equal to converted distance: " << areaSquare << " square kilometers" << endl;
cout << "Circumference of a circle with a radius equal to half the converted distance: " << circumferenceCircle << " kilometers" << endl;

return 0;
}
