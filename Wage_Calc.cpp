#include <iostream>
#include <string>
using namespace std;
int main() {
	double rate, hours, wage;
	cout << "Enter Hourly Pay Rate: ";
	cin >> rate;
	cout << "Enter Number of Hours Worked: ";
	cin >> hours;
	if (hours > 40) {
		wage = (40 * rate) + ((hours - 40)*1.5*rate);
	}
	else {
		wage = hours * rate;
	}
	cout << "Your week wage is: $" << wage << endl;
	return 0;
}