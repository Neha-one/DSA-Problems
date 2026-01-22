// Ques: Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).
//  Example :

// Input: n = 11
// Output: 3
// Explanation:

// The input binary string 1011 has a total of three set bits.

#include <iostream>
using namespace std;
int hamming(int x)
{
    int count = 0;
    while (x != 0)
    {
        count += x % 2;
        x = x / 2;
    }

    return count;
}
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    cout << hamming(n);
}