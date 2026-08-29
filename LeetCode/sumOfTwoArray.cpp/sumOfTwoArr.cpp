#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void SumOfArr(vector<int>& arr1, int n, vector<int>& arr2, int m, vector<int> &arr3)
{
  int carry = 0;
  int i = n - 1;
  int j = m - 1;
  while (i >= 0 && j >= 0)
  {

    int key = arr1[i] + arr2[j] + carry;
    int digit = key % 10;
    arr3.push_back(digit);
    carry = key / 10;

    i--;
    j--;
  }
  while ( i >= 0)

  {
    int key = arr1[i] + carry;
    int digit = key % 10;
    arr3.push_back(digit);
    carry = key / 10;
    i--;
  }
  while ( j >= 0)

  {
    int key = arr2[j] + carry;
    int digit = key % 10;
    arr3.push_back(digit);
    carry = key / 10;
    j--;
  }
  if (carry != 0)
  {
    arr3.push_back(carry);
  }
  reverse(arr3.begin(), arr3.end());
}
void print(vector<int> arr3)
{
  for (int i = 0; i < arr3.size(); i++)
  {
    cout << arr3[i] << " ";
  }
}
int main()
{
  vector<int> arr1 = {1, 2, 3};
  vector<int> arr2 = {3, 4, 7};
  int n = arr1.size();
  int m = arr2.size();
  vector<int> arr3;

  SumOfArr(arr1, n, arr2, m, arr3);
  print(arr3);
  return 0;
}