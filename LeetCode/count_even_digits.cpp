#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int count = 0;

    for (int num : nums) {
        int digits = 0;

        // Handle case when number is 0
        if (num == 0) digits = 1;

        while (num != 0) {
            num /= 10;
            digits++;
        }

        if (digits % 2 == 0) {
            count++;
        }
    }

    cout << "Count of even digit numbers: " << count;

    return 0;
}