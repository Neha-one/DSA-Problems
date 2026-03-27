#include <iostream>
using namespace std;

bool isHappy(int n) {
    while (n != 1 && n != 4) {
        int sum = 0;

        while (n != 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum;
    }

    return n == 1;
}

int main() {
    int n;
    cout<<"enter number: ";
    cin >> n;

    if (isHappy(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}