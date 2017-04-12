#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
	cout << "Hello Math!";
	cout << endl;

	double x = 4.9;
	double y = 3.2;
	double z = 1.3;
	bool ex = false;

	cout << x << " + " << y << " = " << add(x,y) << endl;
	cout << x << " + " << y << " + " << z << " = " << add(x,y,z) << endl;
	cout << "Test X: " << test(x) << endl;
	cout << "Test ex: " << test(ex) << endl;	

	return 0;
}