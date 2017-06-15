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

    vi[5] = 3;
    vi[6] = -1;
    vi[1] = 99;

    for( auto item:vi ){
        cout << item << " ";
    }
    cout << endl;

    for ( unsigned int i=0; i < vi.size(); i++ ){
        cout << vi[i] << " " ;
    }
    cout << endl;

    for( auto i = begin(vi); i != end(vi); i++ ){
        cout << *i << " ";
    }
    cout << endl;

    vector<string> vs;
    cout << "enter three words" << endl;
    for( int i=0; i < 3; i++ ){
        string s;
        cin >> s;
        vs.push_back(s);
    }

    sort(begin(vs), end(vs));
    for( auto item:vs){
        cout << item << " ";
    }
    cout << endl;

    int threes = count(begin(vi), end(vi), 3);
    cout << "vector of ints has " << threes << " elements with value of 3" << endl;

    //string is a collection
    int tees = count(begin(vs[0]), end(vs[0]),'t');
    cout << "first word has " << tees << " letter T's" << endl;

    return 0;
}