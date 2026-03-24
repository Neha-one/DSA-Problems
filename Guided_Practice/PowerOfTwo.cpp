#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    bool flag = false;
    int i = 1;
    while (i < 31)
    {
        if (n == pow(2, i))
        {
            flag = true;
            break;
        }

        i++;
    }
    if (flag)
        cout << "yes! the given number is Power of Two.";
    else
        cout << "no! yes the given number is not Power of Two.";
}