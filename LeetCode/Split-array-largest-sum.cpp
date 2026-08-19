#include <iostream>
using namespace std;
bool ispossible(int arr[], int NumberOfsubArr, int n, int mid)
{
  int subArrSum = 0;
  int subArr = 1;
  for (int i = 0; i < n; i++)
  {
    if (subArrSum + arr[i] <= mid)
    {
      subArrSum += arr[i];
    }
    else
    {
      subArr++;
      if (subArr > NumberOfsubArr || arr[i] > mid)
      {
        return false;
      }
      subArrSum = arr[i];
    }
  }
  return true;
}
int subArrPartition(int arr[], int NumberOfsubArr, int n)
{
  int totalArrSum = 0;
  for (int i = 0; i < n; i++)
  {
    totalArrSum += arr[i];
  }
  int s = 0;
  int e = totalArrSum;
  int mid = s + (e - s) / 2;
  int ans = 0;
  while (s <= e)
  {
    if (ispossible(arr, NumberOfsubArr, n, mid))
    {
      ans = mid;
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}
int main()
{
  int arr[] = {5, 10, 15, 20};
  int NumberOfsubArr = 2;
  int n = sizeof(arr) / sizeof(int);
  cout << subArrPartition(arr, NumberOfsubArr, n);
}