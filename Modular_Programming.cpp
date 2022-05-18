#include<iostream>
using namespace std;
const double pi = 3.14;

/* Declare the prototypes of your functions */
double computeBaseArea(double radius);
double computeVolume(double rad, double height);
void printData(double R, double H, double area, double vol);

int main() {
    /* Declare variable */
    double r, h, A, V;
    /* Get radius and height from the user */
    cout << "Enter radius: "; // Prompt user for the radius
    cin >> r; // Assign input to r
    cout << "Enter height: ";
    cin >> h;
    /* Compute Area */
    A = computeBaseArea(r);
    /* Compute Volume */
    V = computeVolume(r, h);
    /* Ouput Data to Computer Screen*/
    printData(r, h, A, V);
    system("PAUSE");
    return 0;
}

/* computeBaseArea function 
It calculates the base area of a cylinder
*/
double computeBaseArea(double radius) {
    double Area;
    Area = pi * radius * radius;
    return Area;
}

double computeVolume(double rad, double height) {
    double Volume;
    Volume = computeBaseArea(rad) * height;
    return Volume;
}

void printData(double R, double H, double area, double vol) {
    cout << "Radius: " << R << " Height: " << H << " Base Area: " << area << " Volume: " << vol << endl;
}
