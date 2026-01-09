#include <iostream>
using namespace std;

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

// int main()
// {
//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

// int main()
// {
//     int n = 5;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <=n - i ; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

// int main()
// {
//     int n = 5;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= i+1; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

/*
1      1
12    21
123  321
12344321
*/

// int main()
// {
//     int n = 4;
//     int sp = 2 * (n - 1);

//     for (int i = 1; i <=n; i++)
//     { // Num
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         // Space
//         for (int j = 1; j <=sp; j++)
//         {
//             cout << " ";
//         }
//         // Num
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//         sp-=2;
//     }

//     return 0;
// }

/*
1
01
101
0101
10101
*/

// int main()
// {
//     int n = 4;
//     int start = 1;

//     for (int i = 0; i <=n; i++)
//     { // Num
//         if(i%2==0) start = 1;
//         else start = 0;

//         for (int j = 0; j <= i; j++)
//         {
//             cout<<start;
//             start=1-start;

//         }
//         cout << endl;
//     }

//     return 0;
// }