#include<iostream>
#include<string>
using namespace std;
int main() {
	int classification;
	cout << "Enter 1 for Freshman, 2 for Sophomore, 3 for Junior, and 4 for Senior: ";
	cin >> classification;

	switch (classification) {
	case 1:
		cout << "Classification is FRESHMAN" << endl;
		break;
	case 2:
		cout << "Classification is SOPHOMORE" << endl;
		break;
	case 3:
		cout << "Classification is JUNIOR" << endl;
		break;
	case 4:
		cout << "Classification is SENIOR" << endl;
		break;
	default:
		cout << "Invalid Input" << endl;
	}
	system("PAUSE");
	return 0;
}