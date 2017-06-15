#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account a1;
    a1.Deposit(90);
    cout << "Current balance is: " << a1.GetBalance() << endl;

    cout << "Report: " << endl;
    for( string line:a1.Report()){
        cout << line << endl;
    }
    return 0;
}