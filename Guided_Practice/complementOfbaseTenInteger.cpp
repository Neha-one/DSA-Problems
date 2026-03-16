#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int m = n;
    int mask = 0;
    while (m != 0)
    {
        mask = mask << 1;
        mask = mask | 1;
        m = m >> 1;
    }
    cout << ((~n) & mask);
    return 0;
}