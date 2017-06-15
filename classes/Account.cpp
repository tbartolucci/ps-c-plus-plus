#include "Account.h"

using namespace std;

Account::Account():balance(0)
{

}

bool Account::Deposit(int amt)
{
    if ( amt >= 0 ){
        balance += amt;
        log.push_back(Transaction(amt,"Deposit"));
        return true;
    }
    return false;
}

bool Account::Withdraw(int amt)
{
    if( amt >= 0 ){
        if( amt > balance){
            return false;
        }

        balance -= amt;
        log.push_back(Transaction(amt,"Withdraw"));
        return true;
    }
    return false;
}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is: " + to_string(balance));
    report.push_back("Transactions: ");
    for(Transaction item:log){
        report.push_back(item.Report());
    }

    return report;
}

// int Account::GetBalance()
// {
//     return balance;
// }