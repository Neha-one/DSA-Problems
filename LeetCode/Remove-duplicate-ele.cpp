#include <iostream>
using namespace std;
int removeDuplicate(int arr[], int n)
{
  int i = 0;
  int count = 0;
  int key = 0;
  while (i < n)
  {
    if (arr[key] == arr[i + 1])
    {
      count++;
      i++;
    }
    else
    {
      i++;
      key++;
    }
  }
  return count;
}
int main()
{
  int arr[] = {1, 2, 2, 3, 4, 4, 5};
  int n = sizeof(arr) / sizeof(int);
  cout << removeDuplicate(arr, n);

  return 0;
}
