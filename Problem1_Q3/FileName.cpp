#include<iostream>

using namespace std;

int main()
{
	//3.Converts  the  length  in  feet  to  centimeter,  you  can  calculate  the  length  in  cm(LCM)  by multiplying length in feet (Lft) with 30.

	double length;

	cout << "Enter the length in feet: ";
	cin >> length;

	cout << "The length in cm is: " << length * 30;

	return 0;
}