#include <iostream>
using namespace std;

enum PowerState
{
    off,
    on,
    sleep
};

int main()
{
    PowerState state = sleep;

    switch (state)
    {
    case off:
        cout << "Device is turned off";
        break;
    case on:
        cout << "Device is running";
        break;
    case sleep:
        cout << "Device is in power-saving mode";
        break;
    }
}

