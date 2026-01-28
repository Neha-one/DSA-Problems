// Ques: Substract the Product and sum of digits of an interger.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }

    cout << "substraction of product " << product << " and sum " << sum << " = " << product - sum;
 
}
