#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n <= 0)
        return false;

    while (n > 1)
    {
        if (n % 2 != 0)
        {
            return false; // not divisible by 2
        }
        n = n / 2;
    }

    return true;
}

int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << "Yes";
    else
        cout << "No";
}