#include <iostream>

using namespace std;

int main()
{
	int answer = 12;
	int guess;

	cout << "Guess my number!" << endl;
	cout << "Enter a number: ";
	cin >> guess;
	
	while (guess != answer)
	{
		if (answer < guess)
		{
			cout << "Your guess is too high." << endl;
		}
		else
		{
			cout << "Your guess is too low." << endl;
		}

		cout << "Enter a new number: ";
		cin >> guess;
	}

	cout << "You guessed the number!" << endl;

	return 0;
}