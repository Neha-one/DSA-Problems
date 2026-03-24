#include <iostream>
using namespace std;

int countDigits(int num)
{
    int original = num;
    int count = 0;

    while (num > 0)
    {
        int d = num % 10; // get last digit

        if (d != 0 && original % d == 0)
        {
            count++;
        }

        num = num / 10; // remove last digit
    }

    return count;
}

int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;

    cout << countDigits(num);
}