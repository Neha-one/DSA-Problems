#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void SumOfArr(vector<int> &arr1, int n, vector<int> &arr2, int m, vector<int> &ans)
{
  int carry = 0;
  int i = n - 1;
  int j = m - 1;
  while (i >= 0 && j >= 0)
  {

    int sum = arr1[i] + arr2[j] + carry;
    int digit = sum % 10;
    ans.push_back(digit);
    carry = sum / 10;

    i--;
    j--;
  }
  while (i >= 0)

  {
    int sum = arr1[i] + carry;
    int digit = sum % 10;
    ans.push_back(digit);
    carry = sum / 10;
    i--;
  }
  while (j >= 0)

  {
    int sum = arr2[j] + carry;
    int digit = sum % 10;
    ans.push_back(digit);
    carry = sum / 10;
    j--;
  }
  if (carry != 0)
  {
    ans.push_back(carry);
  }
  reverse(ans.begin(), ans.end());
}
void print(vector<int> ans)
{
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}
int main()
{
  vector<int> arr1 = {1, 2, 3};
  vector<int> arr2 = {3, 4, 7};
  int n = arr1.size();
  int m = arr2.size();
  vector<int> ans;

  SumOfArr(arr1, n, arr2, m, ans);
  print(ans);
  return 0;
}