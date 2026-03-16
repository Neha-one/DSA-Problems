#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int binary = 0;
    int place = 1;
    int x = n;
    while (n != 0)
    {
        int rem = n % 2;
        binary = binary + rem * place;
        place *= 10;
        n = n / 2;
    }
    cout << "binary of " << x << " = " << binary << endl;
}