#include<iostream>
using namespace std;
const double pi = 3.14;
int main() {

    /* Declare variable */
    double r, h, A, V;

    /* Get radius and height from the user */
    cout << "Enter radius: "; // Prompt user for the radius
    cin >> r; // Assign input to r
    cout << "Enter height: ";
    cin >> h;

    /* Compute Area */
    A = pi * r * r;
    /* Compute Volume */
    V = A * h;
    
    /* Ouput Data to Computer Screen*/
    cout << "Radius: " << r << " Height: " << h << " Base Area: " << A << " Volume: " << V << endl;
    system("PAUSE");
    return 0;
}
