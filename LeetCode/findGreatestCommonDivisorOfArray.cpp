#include <iostream>
#include <vector>
using namespace std;

// simple gcd function
int gcd(int a, int b) {
    while (b != 0) {
        a = a % b;
        int temp = a;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int mini = nums[0];
    int maxi = nums[0];

    // find min and max
    for (int i = 0; i < n; i++) {
        if (nums[i] < mini) mini = nums[i];
        if (nums[i] > maxi) maxi = nums[i];
    }

    cout << gcd(mini, maxi);

    return 0;
}