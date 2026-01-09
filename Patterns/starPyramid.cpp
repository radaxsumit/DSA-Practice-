#include <iostream>
using namespace std;

/* ⭐ Patterns ONLY */

/* i=j=5 Iteration

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << '*' << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



/* i=4 & j=6 Iteration

* * * * * * 
* * * * * *
* * * * * *
* * * * * *

*/

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < 6; j++)
//         {
//             cout << '*' << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



/*
* * * * * 
*       *
*       *
*       *
* * * * *
*/

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
//             {
//                 cout << "* ";
//             }
//             else cout << "  ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



/* i = 5 , j = (i+1) , s = (n-i-1)

*
* *
* * *
* * * *
* * * * *

*/

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {   
//         // for *
//         for (int j = 0; j < i+1; j++)
//         {
//             cout << '*' << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


/* i = 5 , s = i(0,1,2,3,4) , j = (n-i)start

* * * * * 
  * * * *
    * * *
      * *
        *

*/

// int main()
// {
//     int n = 5;

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
//             cout << '*' << " ";
//         }
        

//         cout << endl;
//     }

//     return 0;
// }


/* i = 5 , j = (n-1) 

* * * * * 
* * * *
* * *
* *
*

*/

// int main()
// {
//     int n = 5;

//     for (int i = 0; i < n; i++)
//     {   
//         // for *
//         for (int j = 0; j < n-i ; j++)
//         {
//             cout << '*' << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


/* i = 5 , s = (n-i-1) , j = (n-1) 

        * 
      * *
    * * *
  * * * *
* * * * *

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
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
