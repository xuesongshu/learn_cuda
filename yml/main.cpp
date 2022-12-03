#include <iostream>
#include <a.hpp>
#include <b.hpp>

using namespace std;

int main(int argc, char **argv)
{
    int ichoice;
    cout << "input choice" << endl;
    cin >> ichoice;
    while (true)
    {
        switch (ichoice)
        {
        case 0:
            break;
        case 1:
            a_hello();
            break;
        case 2:
            b_hello();
            break;
        default:
            cout << "invalid choice." << endl;
            break;
        }
        if (ichoice == 0)
            break;
    }
    return 0;
}