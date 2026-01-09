#include <iostream>
#include <cfloat>
using namespace std;

// int main()
// {
//     char oper;
//     int a, b;
//     double res;

//     cout << "Enter your operator(+, -, *, /, %) = ";
//     cin >> oper;

//     cout << "Enter the two numbers : ";
//     cin >> a >> b;

//     if (oper == '+')
//         res = a + b;
//     else if (oper == '-')
//         res = a - b;
//     else if (oper == '*')
//         res = a * b;
//     else if (oper == '/')
//         res = a / b;
//     else if (oper == '%')
//         res = a % b;
//     else
//     {
//         cout << "Error! Please Enter a valid operator";
//     }

//     cout << "Result = " << res;

//     return 0;
// }

int main (){
    bool isPrime = true;
    int n = 11;

    for(int i =2; i*i<=n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        } 
    }

    if(isPrime == true) {
        cout<<"Prime no\n";
    } else {
        cout<<"Not a Prime no\n";
    }

    return 0;
}