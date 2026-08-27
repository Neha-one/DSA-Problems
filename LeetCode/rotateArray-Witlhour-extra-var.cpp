#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArray(vector<int> &arr, int k)
{
  reverse(arr.begin(), arr.begin() + k);
  reverse(arr.begin() + k, arr.end());
}
void print(vector<int> arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  vector<int> arr = {2, 3, 4, 5, 6, 7};

  int k = 3;
  reverse(arr.begin(), arr.end());
  rotateArray(arr, k);
  print(arr);
  return 0;
}