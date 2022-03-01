// i will be trying to include calculations, strings and sentences in program
#include <iostream>
using namespace std;
	int main ()
{
	// indicating the variables i will be using in this program
    int a, b, c, result;
    a= 5;
    b= 4;
    c= a*b;
    result= c/2;
// print out the result 
    cout << result << endl; // Note the brackets face the same direction for endl to function

int e(50); 
int d, f;
     d= 5;
     f= e/d;
     cout << f << endl;

     cout <<"I am writing a code"<< endl; // combining calculation with expression to see output

string mystring;
mystring= "My first string";
    cout<< mystring<< endl;
mystring= "This is another string content";
    cout << mystring << endl; // successful string inclusion

#define PI 3.142
	int r= 5.0, circle;
	circle= 2 * PI * r;
	cout<< circle<< endl;
	
#define Z 6.02e2 // define permanently stores a value, variable or constant
	int x=2, y= 5, box;
	box= x*2*y*Z;
	cout <<box<< endl;
	
	int w=1, h=3, t=5, cat, dog, mouse;
	cat= w*h; dog= t-w; mouse= t+h;
	cout<< (cat==dog) << endl;
	cout<< (dog>=mouse)<< endl;
	cout<< (mouse>cat)<< endl;
	
	return 0; 

}

