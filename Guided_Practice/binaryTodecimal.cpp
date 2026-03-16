#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int decimal = 0;
    int place = 0;
    while (n != 0)
    {
        int bit = n % 10;
        decimal = (bit * pow(2, place)) + decimal;
        place++;
        n = n / 10;
    }
    cout << decimal;
}