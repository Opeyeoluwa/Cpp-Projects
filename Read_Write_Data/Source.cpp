#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
const double pi = 3.142;
int main() {
	/* Declare variables */
	double radius = 0.0, circle_area = 0.0;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	/* Declare input and output files */
	ifstream read_file;
	ofstream write_file;

	/* Open input and output files */
	read_file.open("C:/Users/PC/Documents/PROGRAMMING/C++PROGRAMS/programs/Read_Write_File/Read_Write_File/input_file.txt");
	write_file.open("C:/Users/PC/Documents/PROGRAMMING/C++PROGRAMS/programs/Read_Write_File/Read_Write_File/output_file.txt");

	/* Read radius from file, compute area,
	and write radius and area to file*/
	/* Write headings */
	write_file << std::setw(8) << "RADIUS" << std::setw(14) << " AREA" << endl;
	/* Also write heading to computer screen */
	cout << std::setw(8) << "RADIUS" << std::setw(14) << "AREA" << endl;;
	
	while (!read_file.eof())
	{
		read_file >> radius;
		circle_area = pi * radius * radius;
		write_file << std::setw(8) << std::fixed << std::setprecision(2) << radius << std::setw(14) << std::fixed << std::setprecision(2) << circle_area << endl;

		/* Also print to computer screen */
		cout << std::setw(8) << radius << std::setw(14) << circle_area << endl;
	}
	system("PAUSE");
	return 0;
}