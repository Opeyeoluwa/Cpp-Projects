#include<iostream>
#include<string>
using namespace std;

int main() {
    int loop;
    double A;
    double B;
    double Sum;
	cout << "Enter 1 to continue: ";
    cin >> loop;

    while(loop==1){
        cout << "Enter two numbers: ";
        cin >> A >> B;
        Sum = A+B;
        cout << "The sum of the two numbers is " << Sum << endl;
        cout << "Enter 1 to continue: ";
        cin >> loop;
    }
	return 0;
	system("PAUSE");
}