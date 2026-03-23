#include <iostream>
#include <string>
using namespace std;

enum type
{
    deposit,
    withdraw,
    check,
    Exit
};

int main()
{
    string input;
    type transaction;

    cout << "Enter transaction (deposit, withdraw, check, Exit): ";
    cin >> input;

    if (input == "deposit")
    {
        transaction = deposit;
    }
    else if (input == "withdraw")
    {
        transaction = withdraw;
    }
    else if (input == "check")
    {
        transaction = check;
    }
    else if (input == "exit")
    {
        transaction = Exit;
    }
    else
    {
        cout << "Invalid.";
    }

    switch (transaction)
    {
    case deposit:
        cout << "Deposit process";
        break;
    case withdraw:
        cout << "Withdraw process";
        break;
    case check:
        cout << "Current balance";
        break;
    case Exit:
        cout << "Exiting ATM";
        break;
    }

}
