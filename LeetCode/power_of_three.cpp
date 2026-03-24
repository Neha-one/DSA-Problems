#include <iostream>
using namespace std;

bool isPowerOfThree(int n) {
    if (n <= 0) return false;

    while (n > 1) {
        if (n % 3 != 0) {
            return false;   // not divisible by 3
        }
        n = n / 3;
    }

    return true;
}

int main() {
    int n;
    cout<<"enter number: ";
    cin >> n;

    if (isPowerOfThree(n))
        cout << "Yes";
    else
        cout << "No";
}