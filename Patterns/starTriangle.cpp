#include <iostream>
using namespace std;

/* i = 5 , j = (n-1)
          *
        *   *
      *   *   *
    *   *   *   *
  *   *   *   *   *
*   *   *   *   *   *


*/

// int main()
// {
//     int n = 6;

//     for (int i = 0; i < n; i++)
//     {
//         // Space
//         for (int s = 0; s < n-i-1; s++)
//         {
//             cout << ' ' << " ";
//         }
//         // for *
//         for (int j = 0; j < i+1 ; j++)
//         {
//             cout << "*  " << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

/* i = 5 , j = (n-1)

          *
        *   *
      *   *   *
    *   *   *   *
  *   *   *   *   *
*   *   *   *   *   *
*   *   *   *   *   *
  *   *   *   *   *
    *   *   *   *
      *   *   *
        *   *
          *

*/

// int main()
// {
//     int n = 6;

//     for (int i = 0; i < n; i++)
//     {
//         // Space
//         for (int s = 0; s < n - i - 1; s++)
//         {
//             cout << ' ' << " ";
//         }
//         // for *
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*  " << " ";
//         }

//         cout<<endl;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         // Space
//         for (int s = 0; s < i; s++)
//         {
//             cout << ' ' << " ";
//         }
//         // for *
//         for (int j = n - i; j > 0; j--)
//         {
//             cout << "*  " << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

/* i = 5 , j = (n-1)

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*

*/

// int main()
// {
//     int n = 6;

//     for (int i = 0; i < n; i++)
//     { //star
//         for(int j = 0; j < i+1; j++){
//             cout << "*" <<" ";
//         }
//         cout<<endl;
//     }

//     for (int i = 1; i < n; i++)
//     { //star
//         for(int j = 0; j < n - i; j++){
//             cout << "*" <<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

/* i = 5 , j = (n-1)

*      *
**    **
***  ***
********
***  ***
**    **
*      *

*/

// int main()
// {
//     int n = 4;

//     // Top
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*";
//         }

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < i + 1; j++)
//         {

//             cout << "*";
//         }
//         cout << endl;
//     }

//     //Bottom
//     for (int i = 1; i < n; i++)
//     {
//         // 1st
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << "*";
//         }

//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         // 2nd
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 0; j < n-i; j++)
//         {

//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }



/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

int main()
{
    int n = 5;
    int sp = 0;

    //top
    for (int i = 0; i < n; i++)
    {
        /* Star */
        for(int j = 0; j < n-i; j++){
            cout<<"*";
        }
        /* Space */
        for(int j = 0; j < sp; j++){
            cout<<" ";
        }
        /* Star */
        for(int j = 0; j < n-i; j++){
            cout<<"*";
        }
        sp+=2;
        cout<<endl;
    }

    //Bottom
    sp=2*n-2;
    for (int i = 0; i < n; i++)
    {
        /* Star */
        for(int j = 0; j < i+1; j++){
            cout<<"*";
        }
        /* Space */
        for(int j = 0; j < sp; j++){
            cout<<" ";
        }
        /* Star */
        for(int j = 0; j < i+1; j++){
            cout<<"*";
        }
        sp-=2;
        cout<<endl;
    }

    

    return 0;
}