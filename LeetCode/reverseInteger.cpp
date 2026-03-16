// // Ques : given a signed 32-bit integer x with its digits reversed . if reversing x causes the value to go outside the signed 32-bit integer range (-2^31, 2^31-1 ) , then return 0.
// // ex : input x=123
// // output 321

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter number:";
//     cin >> n;
//     int reverse = 0;
//     while (n != 0)
//     {
//         int rem = n % 10;
//         reverse = reverse * 10 + rem;
//         if (reverse > (INT_MAX / 10) || reverse < (INT_MIN / 10))
//             -- -- -- -- -- -- -
//             {
//                 return 0;
//             }
//         n = n / 10;
//     }
//     cout << reverse;
// }