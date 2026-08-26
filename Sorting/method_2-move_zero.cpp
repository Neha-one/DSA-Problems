
#include <iostream>
using namespace std;
void moveZero(int arr[], int n)
{
  int i = 0;
  for (int j = 0; j < n; j++)
  {
    if (arr[j] != 0)
    {
      swap(arr[i], arr[j]);
      i++;
    }
  }
}
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr1[] = {2, 0, 3, 0, 4};
  moveZero(arr1, 5);
  print(arr1, 5);
}