#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (int i = 1; i<16; i++)
	{
		for (int j=1; j<16; j++)
		{
			cout<<i*j<<"\t";
		}
		cout<<endl;	
	}
}
