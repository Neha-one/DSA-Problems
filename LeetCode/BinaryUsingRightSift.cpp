#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int place = 1;
    int binary = 0;
    while (n != 0)
    {
        int bit = n & 1;
        binary = binary + bit * place;
        place *= 10;
        n = n >> 1;
    }
    cout << binary;
}