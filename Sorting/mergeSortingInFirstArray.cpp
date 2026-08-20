#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> v1, int n, vector<int> v2, int m)
{
  int i = m + n, j = 0;
  while (i < n && j < m)
  {
    if (v1[i] > v2[j])
    {
      v1[i] = v2[j];
    }
  }
  while (j < n)
  {
  }
}

int main()
{
  vector<int> v1 = {1, 2, 3, 0, 0, 0};
  vector<int> v2 = {2, 5, 6};

  merge(v1, 6, v2, 3);
  return 0;
}