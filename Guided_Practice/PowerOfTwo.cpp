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
        cout << "yes";
    else
        cout << "no";
}