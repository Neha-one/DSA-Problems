#include <iostream>
#include <vector>
using namespace std;
void rotateArray(vector<int> &arr, int n, int k)
{
  vector<int> temp(arr.size());
  for (int i = 0; i < arr.size(); i++)
  {
    temp[(i + k) % n] = arr[i];
  }
  arr = temp;
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
  rotateArray(arr, 6, k);
  print(arr);
  return 0;
}