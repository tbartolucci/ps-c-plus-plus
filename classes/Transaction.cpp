#include "Transaction.h"

using namespace std;

Transaction::Transaction(int amt, string kind):amt(amt),type(kind)
{

}

string Transaction::Report()
{
    string report;
    report = "  " + type + ": " + to_string(amt);
    return report;
}