#include <iostream>
#include <string>
using namespace std;

enum OrderStatus
{
    placed,
    cooking,
    ready,
    delivered
};

int main()
{
    string input;
    OrderStatus status;

    cout << "Enter status (placed, cooking, ready, delivered): ";
    cin >> input;

    if (input == "placed")
    {
        status = placed;
    }
    else if (input == "cooking")
    {
        status = cooking;
    }
    else if (input == "ready")
    {
        status = ready;
    }
    else if (input == "delivered")
    {
        status = delivered;
    }
    else
    {
        cout << "Invalid!";
    }

    switch (status)
    {
    case placed:
        cout << "Order received.";
        break;
    case cooking:
        cout << "Food is cooking.";
        break;
    case ready:
        cout << "Food is ready.";
        break;
    case delivered:
        cout << "Order delivered. Enjoy your meal.";
        break;
    }
}
