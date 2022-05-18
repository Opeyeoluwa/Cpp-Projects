#include<iostream>
#include<string>
using namespace std;

int main() {
	double grade = 0.0;

	cout << "Enter a grade: ";
	cin >> grade;

	if ((90 <= grade) && (grade <= 100)) {
		cout << "A" << endl;
	}
	else if ((80 <= grade) && (grade < 90)) {
		cout << "B" << endl;
	}
	else if ((70 <= grade) && (grade < 80)) {
		cout << "C" << endl;
	}
	else if ((60 <= grade) && (grade < 70)) {
		cout << "D" << endl;
	}
	else if (grade < 60) {
		cout << "F" << endl;
	}
	else {
		cout << "Invalid Input" << endl;
	}

	return 0;
	system("PAUSE");
}
