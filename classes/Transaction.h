#include <string>

class Transaction{
    private:
        int amt;
        std::string type;
    public:
        Transaction(int amt, std::string kind);
        std::string Report();
};