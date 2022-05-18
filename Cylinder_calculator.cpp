#include<iostream>
using namespace std;
int main() {
	/* Declare and initialize variables */
	double r = 0.0; // Cylinder radius
	
	double h = 0.0; // Cylinder Height
	double baseArea = 0.0; // Cylinder base area
	double base_circumference = 0.0; //base_Circumference
	double curved_surface_area = 0.0; // curved_surface_area 
	double cylinder_volume = 0.0; // cylinder_volume
	double pi = 22 / 7; // The value of pi
	
	cout << "Enter cylinder radius: " << endl; // Prompt user to enter radius
	cin >> r; // Read radius and assign it to r
	cout << "Enter the height: " << endl; // Prompt user to enter height
	cin >> h; // Read height and assign it to h
	
	//Compute base area
	baseArea = pi * r * r; 
	//Compute the circumference
	base_circumference = 2 * pi * r;
	//Compute the circumference
	curved_surface_area = 2 * pi * r * h;
	//Compute the curved surfae area
	cylinder_volume = pi * r * r * h;
	//Compute the cylinder volume

	//Outputs
	cout << "Cylinder Base Radius: " << r << endl;
	cout << "Cylinder Height " << h << endl;
	cout << "Cylinder Base Area: " << baseArea << endl;
	cout << "Cylinder Base Circumference: " << base_circumference << endl;
	cout << "Cylinder Curved Surface Area: " << curved_surface_area << endl;
	cout << "Cylinder Volume: " << cylinder_volume << endl;
	system("PAUSE");
	return 0;
}
