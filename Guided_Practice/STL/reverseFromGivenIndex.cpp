#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v, int m)
{
  int s = m;
  int e = v.size() - 1;
  while (s <= e)
  {
    swap(v[s], v[e]);
    s++;
    e--;
  }
  return v;
}

void print(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}

int main()
{
  vector<int> v;

  int m = 2;

  v.push_back(2);
  v.push_back(4);
  v.push_back(6);
  v.push_back(8);
  v.push_back(10);
  v.push_back(12);
  v.push_back(14);

  cout << "printing the array : ";
  print(v);

  cout << endl;

  cout << "printing reverse array from a specific index : ";

  print(reverse(v, m));
}