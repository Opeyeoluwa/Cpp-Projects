#include<iostream>
#include<string>
using namespace std;
int main() {
	int classification;
	cout << "Enter 1 for Freshman, 2 for Sophomore, 3 for Junior, and 4 for Senior: ";
	cin >> classification;
	if (classification == 1) {
		cout << "Classification is FRESHMAN" << endl;
	}
	else if (classification == 2) {
		cout << "Classification is SOPHOMORE" << endl;
	}
	else if (classification == 3) {
		cout << "Classification is JUNIOR" << endl;
	}
	else if (classification == 4) {
		cout << "Classification is SENIOR" << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}
	system("PAUSE");
	return 0;
}