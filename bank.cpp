#include <iostream>
#include <string>

class Transaction {
public:
    static int accountNumber;
    static std::string accountName;

    static void calculateTransaction(int p, int n, int r) {
        int transaction = (p * n * r) / 100;
        std::cout << "Transaction for Account " << accountNumber << " (" << accountName << "):  $" << transaction << std::endl;
    }
};

int Transaction::accountNumber = 12345;
std::string Transaction::accountName = "John Doe";

int main() {
    int principal = 10000;
    int years = 2;
    int rate = 5;

    Transaction::calculateTransaction(principal, years, rate);

    return 0;
}

