#include <iostream>
#include "TestA.hpp"
#include "TestB.hpp"
#include <ctime>

using namespace std;
int main(int argc, char **argv)
{
    while (true)
    {
        cout << "input choice" << endl;
        int ichoice;
        cin >> ichoice;
        switch (ichoice)
        {
        case 0:
            break;
        case 1:
            {
                TestA a;
                clock_t iclock1 = clock();
                a.gen_amp();
                clock_t iclock2 = clock();
                a.gen_cpu();
                clock_t iclock3 = clock();
                printf("amp elapse: %d, cpu elapse: %d. \r\n",
                       iclock2 - iclock1,
                       iclock3 - iclock2);
            }
            break;
        case 2:
            break;
        default:
            cout << "invalid choice." << endl;
            break;
        }
        if (!ichoice)
            break;
    }
}