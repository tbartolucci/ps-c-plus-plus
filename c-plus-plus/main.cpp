#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World";
	cout << endl;
	cout << 2+2;
	cout << endl;

	int i;
	// fractional part will be lost
	i = 4.9;
	cout << i << endl;

	auto j = 5;
	// j is an integer
	cout << j << endl;

	auto f = 5.9;
	//f is an double
	cout << f << endl;
	f = 9.0 / 5;
	cout << f << endl;

	return 0;
}