#include <iostream>
using namespace std;

int main()
{
    int nums[] = {0, 1, 0, 3, 12};
    int n = 5;
    int index = 0;

    // Move non-zero elements
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[index] = nums[i];
            index++;
        }
    }

    // Fill remaining with zeros
    for (int i = index; i < n; i++)
    {
        nums[i] = 0;
    }

    // Print result
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}