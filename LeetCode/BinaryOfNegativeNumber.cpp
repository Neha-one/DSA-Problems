#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int binary = 0;
    int place = 1;
    while (n != 0)
    {
        int bit = n & 1;
        if (bit == 1)
        {
            bit = 0;
        }
        else
        {
            bit = 1;
        }
        binary = binary + bit * place;
        place *= 10;
        n = n >> 1;
        // while (n != 0)
        // {
        // }
        // binary = (binary & 1) + 1;
    }
    cout << binary;
}
