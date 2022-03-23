#include<iostream>
#include<string>
using namespace std;
int main() {
	int i = 0, j = 0;
	string temp;
	const int arraySize = 10;
	/* Declare an array of size 10 called List */

	string List[arraySize];
	cout << "Enter 10 States: ";
	/* Get input */

	for (i = 0; i < arraySize; i++) {
		cin >> List[i];
	}
	/* Sort List in decreasing order */
	
	for (j = 0; j < arraySize - 1; j++){
		for (i = 0; i < arraySize - 1; i++){
			if (List[i] > List[i + 1]){
				temp = List[i];
				List[i] = List[i + 1];
				List[i + 1] = temp;


			}
		}
	}
	/* Print array */
	for (i = 0; i < arraySize; i++) {
		cout << List[i] << " ";
	}
	cout << endl;
	system("PAUSE");
	return 0;
}