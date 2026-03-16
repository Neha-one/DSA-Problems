// Ques: The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
// for example: the integer 5 is "101" in binary and its complement is "010" which is the integer 2.
//  ex: input n=5
//  output 2
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int decimal = 0, place = 0;
    int x = n;
    while (n != 0)
    {
        int rem = n % 2;

        if (rem == 0)
            rem = 1;
        else
            rem = 0;

        decimal = decimal + rem * (pow(2, place));
        place++;

        n = n / 2;
    }

    cout << "decimal of complement of binary of " << x << " = " << decimal;
}