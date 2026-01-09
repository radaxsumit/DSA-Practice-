#include <iostream>
using namespace std;

//  Decimal -> Binary (Base 10 to Base 2) => divide by 2.
// int main()
// {
//     int num;
//     int pow = 1;
//     int ans = 0;

//     cout << "Enter a decimal num = ";
//     cin >> num;

//     while (num > 0)
//     {
//         int rem = num % 2;
//         num = num / 2;

//         ans += (rem * pow);
//         pow = pow * 10;
//     }
//     cout << "Binary num of " << num << " is " << ans;

//     return 0;
// }

// Binay -> decimal (Base 10 to Base 2) => means multiply by 2 power

int main()
{
    int num;
    int pow = 1;
    int ans = 0;

    cout << "Enter a decimal num = ";
    cin >> num;

    while (num > 0)
    {
        int rem = num % 10;
        ans += (rem * pow);
        
        num = num / 10;
        pow = pow * 2;
    }
    cout << "Binary num of " << num << " is " << ans;

    return 0;
}