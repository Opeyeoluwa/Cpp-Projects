#include <iostream>
#include <string>
using namespace std;
int number;
int stop = 0;

/*int main() {
	int num;
	cout << "Enter number 10: " << endl;
	cin >> number, num;
		if (number!=10) {
			cout << "Invalid Input" << endl;
		}
		else {
			cout << "COUNT-DOWN From 10 to 0" << endl;
			while (stop <= number) {
				cout << number << endl;
				number = number - 1;
			}
		}	
	system("PAUSE");
	return 0;
}*/

int main() {
	cout << "Enter number 10: " << endl;
	cin >> number;
	cout << "COUNT-DOWN From 10 to 0" << endl;
	while (stop <= number) {
		cout << number << endl;
		number = number - 1;
	}
	system("PAUSE");
	return 0;
}

 /*int main() {
	cout << "Enter number 10: " << endl;
	cin >> number;
	cout << "COUNT-DOWN From 10 to 0" << endl;
	for (stop = 0; stop <= number; number--) {
		cout << number << endl;
	}
	system("PAUSE");
	return 0;
  }
  */