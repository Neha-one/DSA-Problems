#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int decimal = 0;
    int place2 = 0;
    int x = n;
    while (n != 0)
    {
        int rem = n % 10;
        decimal = decimal + rem * (pow(2, place2));
        place2++;

        n = n / 10;
    }
    cout << "decimal of " << x << " = " << decimal;
}