// #include <iostream>
// using namespace std;

// void MoveZero(int arr1[], int n, int arr2[])
// {
//   int i = 0, count = 0, k = 0;
//   while (i < n)
//   {
//     if (arr1[i] == 0)
//     {
//       count++;
//       i++;
//     }
//     else
//     {
//       arr2[k] = arr1[i];
//       i++;
//       k++;
//     }
//   }
//   int o = 0;
//   while (o < count)
//   {
//     arr2[k] = 0;
//     k++;
//     o++;
//   }
// }
// void print(int arr2[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cout << arr2[i] << " ";
//   }
// }
// int main()
// {
//   int arr1[] = {0, 0, 2, 4, 0, 5, 0, 0};
//   int n = sizeof(arr1) / sizeof(arr1[0]);
//   int arr2[n];
//   MoveZero(arr1, 8, arr2);

//   print(arr2, n);
//   return 0;
// }