#include <iostream>
#include <string>
using namespace std;
const string string1 = "Bjarne Stroustrup";
const string string2 = "C";
const string string3 = "programming language";
const string string4 = "++ because it is a successor to the ";
const string string5 = " named his new ";
const string PART1 = "Pro";
const string PART2 = "gramming and ";
const string PART3 = "blem Solving with C++"; 
int main() {
    cout << "Four score and" << endl << "seven years ago"
		<< "our fathers" << endl 
		<< "brought forth on this" << endl 
		<< "continent a new nation..." << endl; 
	
	cout << string1 + string5 + string3 + " " + string2 + string4 + string2 + " " + string3 + "." << endl;

	cout << PART1 << PART2 << PART1 << PART3;

	return 0;
}