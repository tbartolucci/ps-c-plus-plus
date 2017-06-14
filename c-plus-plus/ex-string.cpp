#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word1;
    string word2;	

    cout << "Please enter the first word: " << endl;
    cin >> word1;

    cout << "Please enter the second word: " << endl;
    cin >> word2;

    if( word1.length() > word2.length() ){
        cout << "The first word is longer than the second" << endl;
    }else if ( word2.length() > word1.length() ){
        cout << "The second word is longer than the first" << endl;
    }else {
        cout << "The words are equal in length" << endl;
    }

	return 0;
}