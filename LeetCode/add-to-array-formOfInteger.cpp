// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void sumOfArr(vector<int> &arr, int k)
// {
//   long long number = 0;
//   int n = arr.size();
//   for (int i = 0; i < n; i++)
//   {
//     number = number * 10 + arr[i];
//   }
//   k%10
//   number = number * 10 + k;
//   int digit = 0;
//   vector<int> newArr;
//   while (number > 0)
//   {
//     digit = number % 10;
//     newArr.push_back(digit);
//     number = number / 10;
//   }
//   reverse(newArr.begin(), newArr.end());
//   arr = newArr;
// }
// void print(vector<int> arr)
// {
//   for (int i = 0; i < arr.size(); i++)
//   {
//     cout << arr[i] << " ";
//   }
// }
// int main()
// {
//   vector<int> arr = {2, 3, 4, 5, 6, 7};

//   int k = 34;
//   sumOfArr(arr, k);
//   print(arr);
//   return 0;
// }