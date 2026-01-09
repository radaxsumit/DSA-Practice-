#include <iostream>
using namespace std;

// 1. finding Min among two
//  int minOfTow(int a , int b){
//      return a<b ? a : b;
//  }

// int main(){
//     int val = minOfTow(7,15);
//     cout<<val;
//     return 0;
// }

// 2.  sum of N numbers
//  int sum(int n){
//      int count=0;
//      for( int i=1; i<=n; i++){
//          count+=i;
//      }
//      return count;
//  }

// int main(){
//     int n;
//     cout<<"Enter the number = ";
//     cin>>n;

//     cout<<"The sum of "<<n<< " numbers is = "<< sum(n)<<endl;
// }

// 3. Finding factorial

// int factN(int n){
//     // if(n<=0){
//     //     return 1;
//     // } else {
//     //     return n*factN(n-1);
//     // }

//     // By loop
//     int fct = 1;
//     for(int i=1; i<=n; i++){
//         fct*=i;
//     }
//     return fct;
// }

// int main()
// {
//     int n;
//     cout << "Enter the numberto find factorial = ";
//     cin >> n;

//     cout << "The Factorial of " << n << " is = " << factN(n) << endl;
//     return 0;
// }

// //4. calculating sum all digits of a number
// int main()
// {
//     int num =12328634;
//     int sum =0;

//     while (num > 0){
//         int lastdigit = num%10;
//         num = num/10;

//         sum+=lastdigit;
//     }
//     cout<<sum;

//     return 0;
// }

// 5. calculating nCr binomial cofficient of n & r
//  int factorialN(int x){
//      if(x<=0){
//          return 1;
//      } else {
//          return x*factorialN(x-1);
//      }
//  }

// int main()
// {
//     int n = 8;
//     int r = 2;

//     cout<<"nCr of given number is = "<< factorialN(n)/(factorialN(r)*factorialN(n-r))<<endl;

// }

// 6. WAP to check a number is prime or not

// void primN(int n){
//     bool isPrime = true;
//     for(int i=2; i<(n-1); i++){ // (i*i<n) is also valid
//         if(n%i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime == true ){
//         cout<<"Given number "<<n<< " is prime"<<endl;
//     } else{
//         cout<<"Given number "<<n<< " is NOT a prime"<<endl;
//     }
// }

// int main()
// {
//     int n=12;
//     primN(n);

//     return 0;
// }

// 7. WAP to print all prime numbers from 2 to N

// bool isPrime(int n){

//     if(n<=1){
//         return false;
//     }

//     for(int i =2; i*i<=n; i++){
//         if(n%i ==0){
//             return false;
//         }
//     }

//     return true;
// }

// int main()
// {
//     int n=12;
//     for(int i=1; i<=n; i++){
//         if(isPrime(i)){
//             cout<<i<<" ";
//         }
//     }

//     return 0;
// }

// Fibonacci Series up to n number of terms

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    // Program to Generate Fibonacci Sequence Up to a Certain Number

    // cout << " Fibonacci Series:" << t1 <<", " << t2 <<", ";

    // nextTerm = t1 + t2;
    // while(nextTerm <= n){
    //     cout<<nextTerm<<", ";
    //     t1 = t2;
    //     t2 = nextTerm;
    //     nextTerm = t1 + t2 ;
    // }

    cout << "Fibonacci Series: ";
    for(int i =1; i <= n; i++){
        if (i==1){
            cout << t1 << ", ";
            continue;
        }
        if(i==2){
            cout << t2 << ", ";
            continue;
        }

        nextTerm = t1 + t2;
        t1=t2;
        t2=nextTerm;
        cout<<nextTerm<<", ";

    }

        return 0;
}