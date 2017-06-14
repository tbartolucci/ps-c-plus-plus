#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for sort and counting

using namespace std;

int main()
{
    vector<int> vi;
    for ( int i = 0; i < 10; i++ ){
        vi.push_back(i);
    }

    for( auto item:vi ){
        cout << item << " ";
    }
    cout << endl;

    vector<string> vs;
    cout << "enter three words" << endl;
    for( int i=0; i < 3; i++ ){
        string s;
        cin >> s;
        vs.push_back(s);
    }

    for( auto item:vs){
        cout << item << " ";
    }
    cout << endl;
    return 0;
}