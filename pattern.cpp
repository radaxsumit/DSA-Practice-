#include<iostream>
using namespace std;

int main()
{
    int n = 4;

    // Top
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {

            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {   
        // 1st
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // 2nd 
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n-i; j++)
        {

            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// int main()
// {
//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {

//         cout << endl;
//     }

//     return 0;
// }

// Hollow Diamond pattern
// int main(){
//     int n=4;

//     // Top pattern
//     for( int i =0; i<n; i++){

//         for (int j = 0; j < n-i-1; j++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";

//         if(i!=0){
//             for( int j=0; j<2*i-1;j++){
//                 cout<<" ";
//             }
//             cout<<"*";
//         }

//         cout<<endl;

//     }

//     // Bottom pattern
//     for(int i=0; i <n-1; i++){
//         // space
//         for (int j = 0; j < i+1; j++)
//         {
//             cout<<" ";
//         }

//         cout<<"*";

//         if(i!=n-2){
//             for (int j = 0; j < 2*(n-i)-5; j++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;

// }

// int main(){
//     int n=5;
//     for (int i = 0; i < n; i++)
//     {
//         for(int j = i+1; j>0; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

// }

// int main()
// {
//     int num = 1;
//     int n = 3;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << num;
//             num+=1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// // int main()
// // {
// //     int n = 6;
// //     char ch = 'A';
// //     for (int i = 0; i < n; i++)
// //     {
// //         for (int j = 0; j < n; j++)
// //         {
// //             cout << ch<<" ";
// //             ch+=1;
// //         }
// //         cout<<endl;
// //     }
// //     return 0;
// // }

// // Patter finding by Nested Loops
// int main(){
//     int n =5;

//     for(int i=1; i<=n;i++ ){
//         for(int j=1; j<=15;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }