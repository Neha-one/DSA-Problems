#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int rotateArray(vector<int> &arr, int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[(i + 1) % n])
    {
      count++;
    }
  }
  return count;
}

int main()
{
  vector<int> arr = {2, 1, 3, 4};
  if (rotateArray(arr, arr.size()) > 1)
  {
    cout << "false";
  }
  else
  {
    cout << "true";
  }
  return 0;
}