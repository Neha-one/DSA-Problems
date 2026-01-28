#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    // int sum = 0;
    // int place = 1;
    // int binary = 0;
    // while (n != 0)
    // {
    //     int rem = n % 2;
    //     sum = sum + rem;
    //     n = n / 2;
    // }
    // cout << sum;

    // 2nd method:
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count;
}