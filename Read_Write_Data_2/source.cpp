#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
const double pi = 3.142;
int main() {
	/* Declare variables */
	double radius = 0.0;
	double height = 0.0; // Cylinder Height
	double baseArea = 0.0; // Cylinder base area
	double base_circumference = 0.0; //base_Circumference
	double curved_surface_area = 0.0; // curved_surface_area 
	double cylinder_volume = 0.0; // cylinder_volume
	std::cout << std::fixed << std::setprecision(2);

	/* Declare input and output files */
	ifstream read_file;
	ofstream write_file;

	/* Open input and output files, change path as necessary */
	read_file.open("C:/Users/PC/Documents/PROGRAMMING/C++PROGRAMS/programs/EE_Lab_4/EE_Lab_4/input_file.txt");
	write_file.open("C:/Users/PC/Documents/PROGRAMMING/C++PROGRAMS/programs/EE_Lab_4/EE_Lab_4/output_file.txt");

	/* Read radius from file, compute area,
	and write radius and area to file*/

	/* Write headings */
	write_file << std::setw(8) << "RADIUS" << std::setw(10) << "HEIGHT" << std::setw(16) << "BASE AREA" << std::setw(20) << "CIRCUMFERENCE" << std::setw(25) << "CURVED SURFACE AREA" << std::setw(14) << "VOLUME" << endl;
	/* Also write heading to computer screen */
	cout << std::setw(8) << "RADIUS" << std::setw(10) << "HEIGHT" << std::setw(16) <<  "BASE AREA" << std::setw(20) << "CIRCUMFERENCE" << std::setw(25) << "CURVED SURFACE AREA" << std::setw(14) << "VOLUME" << endl;;

	while (!read_file.eof())
	{
		read_file >> radius >> height;
		baseArea = pi * radius * radius;
		base_circumference = 2 * pi * radius;
		curved_surface_area = 2 * pi * radius * height;
		cylinder_volume = pi * radius * radius * height;

		/*Write to file*/
		write_file << std::setw(8) << std::fixed << std::setprecision(2) << radius << std::setw(10) << std::fixed << std::setprecision(2) << height << std::setw(16) << std::fixed << std::setprecision(2) << baseArea << std::setw(20) << std::fixed << std::setprecision(2) << base_circumference << std::setw(25) << std::fixed << std::setprecision(2) << curved_surface_area << std::setw(14) << std::fixed << std::setprecision(2) << cylinder_volume << endl;

		/* Also print to computer screen */
		cout << std::setw(8) << radius << std::setw(10) << height << std::setw(16) << baseArea << std::setw(20) << base_circumference << std::setw(25) << curved_surface_area << std::setw(14) << cylinder_volume << endl;
	}
	system("PAUSE");
	return 0;
} 