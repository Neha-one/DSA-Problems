#include <iostream>
using namespace std;

bool isSameAfterReversals(int num) {
    if (num == 0) return true;

    return num % 10 != 0;
}

int main() {
    int num;
    cout<<"enter number: ";
    cin >> num;

    if (isSameAfterReversals(num))
        cout << "true";
    else
        cout << "false";

    return 0;
}