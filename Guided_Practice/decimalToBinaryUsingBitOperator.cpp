#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n:";
    cin >> n;
    int binary = 0;
    int place = 1;
    while (n != 0)
    {
        int bit = n & 1;
        binary = (bit * place) + binary;
        place *= 10;
        n = n >> 1;
    }
    cout << binary;
}