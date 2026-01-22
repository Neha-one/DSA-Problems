// Ques: Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
// Example:

// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {

        int rem;
        int x = i;
        int count = 0;
        while (x != 0)
        {

            // rem = x % 2;
            // if (rem == 1)
            // {
            //     count++;
            // }

            // OR : printig of count in 2nd method:
            count += x % 2;
            x /= 2;
        }
        cout << count << " ";
    }
    return 0;
};