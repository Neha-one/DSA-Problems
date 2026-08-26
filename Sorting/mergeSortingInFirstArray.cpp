#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArray(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
  int i = n - 1;
  int j = m - 1;
  int k = n + m - 1;

  while (i >= 0 && j >= 0)
  {
    if (arr1[i] > arr2[j])
    {
      arr1[k--] = arr1[i--];
    }
    else
    {
      arr1[k--] = arr2[j--];
    }
  }
  while (j >= 0)
  {
    arr1[k--] = arr2[j--];
  }
}

void print(vector<int>arr)
{
  for (int i = 0; i < arr.size();i++){
    cout << arr[i] << " ";
  }
}

int main()
{
  vector<int> arr1 = {2, 5, 7, 0, 0, 0};
  vector<int> arr2 = {3, 4, 6};

mergeSortedArray(arr1, 3, arr2, 3);
  print(arr1);

  return 0;
}
