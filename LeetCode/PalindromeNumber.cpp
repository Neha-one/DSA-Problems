// Ques:-Given an integer n, return true if x is a palindrome, and false otherwise.
#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter n";
    cin >> n;
    int temp = n;
    int digit = 0;
    int num = 0;
    if (n < 0)
    {
        cout << "Not palindrome";
        return 0;
    }
    while (n != 0)
    {
        digit = n % 10;
        num = num * 10 + digit;
        n = n / 10;
    }

    if (num == temp)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "not palindrome";
    }
}