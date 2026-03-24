// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, y;
//     cout << "enter numbers";
//     cin >> x >> y;
//     int fact = 1;
//     int fact2 = 1;
//     for (int i = 1; i <= x; i++)
//     {
//         fact *= i;
//     }

//     for (int i = 1; i <= y; i++)
//     {
//         fact2 *= i;
//     }

//     for (int i = x - 1; i >= 1; i--)
//     {
//         for (int j = y - 1; j >= 1; j--)
//         {

//             if (fact % i == 0 && fact2 % j == 0)
//             {
//                 if (i == j)
//                 {
//                     cout << j;
//                     break;
//                 }
//             }
//         }
//     }
// }

#include <iostream>
using namespace std;
bool isEven(int x)
{
    if (x % 2 != 0)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << "even";
    }
    else
    {
        cout << "not even";
    }
}