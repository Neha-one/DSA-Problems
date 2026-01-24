// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
// Example:

// Input: nums = [3,0,1]
// Output: 2

// Explanation:
// n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "enter n";
    // cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}
