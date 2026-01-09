#include <iostream>
#include <climits>
using namespace std;


void printVovles (string s){
    int count = 0;
    for(int i=0; i<s.length(); i++){
        char ch = tolower(s[i]);

        if( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
            cout<< s[i] << " " << endl;
        }
    }
    cout << "the number of vovles " << count << endl;
}

int main(){
    string s = "Hello World";

    printVovles(s);
}


// ------------------------------------------------> WAP to print intersection of 2 array 

// void printIntersection(int arr1[], int arr2[], int size1, int size2){
//     for(int i=0; i <size1; i++){
//         for(int j=0; j<size2; j++){
//             if(arr1[i] == arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 break;
//             }
//         }
//     }
// }

// int main () {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {3, 4, 4, 5, 6};
//     int size1 =5;
//     int size2 =5;

//     printIntersection(arr1, arr2, size1, size2);
// }




// ------------------------------------------------> WAP to print all unique elements in a array 
// void printUnique(int arr[], int sz){
//     for(int i=0; i<sz; i++){
//         bool isUnique = true;

//         for(int j=0; j<sz; j++){
//             if(i!=j && arr[i] == arr[j]){
//                 isUnique = false;
//                 break;
//             }
//         }
//         if(isUnique){
//             cout<<arr[i]<<" ";
//         }
//     }

// }

// int main () {
//     int arr[] = {1, 2, 2, 3, 4, 4, 5, 5};
//     int sz =7;

//     printUnique(arr , sz);
// }







// -------------------------------------------------> WAF to swap the max & min number of an array

// int swapMinMax(int arr[], int sz)
// {
//     int minIndex = 0 , maxIndex = 0;

//     for(int i=0; i < sz; i++){
//         if(arr[i] < arr[minIndex]);
//         minIndex = i;
//         if(arr[i] > arr[minIndex]);
//         maxIndex = i;
//     }
// }

// int main()
// {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;

//     swapMinMax(arr , sz);

//     for(int i = 0; i < sz; i++ ){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }

// -------------------------------------------------> sum / product of an array

// int sumOfArr(int arr[] , int sz){
//     int sum =1; // sum = 0 if sum ask
//     for (int i=0; i < sz; i++){
//         sum = sum * arr[i]; // for sum sum +=arr[i];
//     }
//     return sum;
// }

// int main(){
//     int arr[]={1,2,3 ,4};
//     int sz = 4;

//     cout<< sumOfArr(arr , sz);

//     return 0;
// }

// -------------------------------------------------> Revere of an array

// int reverseArray(int arr[] , int sz){
//     int start = 0 , end = sz -1;

//     while(start < end ){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     int arr[]={ 4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;

//     reverseArray(arr , sz);

//     for( int i=0; i<sz; i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }

// -------------------------------------------------> Finding size of array
// int arr[5] = {0, 1, 2, 3, 4};

// int sz = sizeof(arr);
// int szindex = sizeof(arr[1]);

// int arrayLength = sz/szindex;
// cout << arrayLength ;

// --------------------------------------------------> Loops in arry input and print

// int marks[5];
// // input
// cout <<"Enter the array elements = " ;
// for(int i = 0; i < 5; i++){
//     cin >> marks[i];
// }

// // Output
// cout <<"Your Arry = " ;
// for(int i = 0; i < 5; i++){
//     cout << marks[i] << endl;
// }

// --------------------------------------------------> Find Smallest & Largest in array / and also returning the index of the number

// int nums[] = { 10 , 22 , 5 , -1 , 400 , 16 , 24};
// int size = 7;
// int smallest = INT_MAX;
// int smallestIndex ;
// // int largest = INT_MIN;

// for(int i = 0; i < size; i++){
//     if( nums[i] < smallest){
//         smallest = nums[i];
//         smallestIndex = i;
//     }

//     // smallest = min(nums[i],smallest);
//     // largest = max(nums[i],largest);
// }

// cout << "Smallest = " << smallest << endl;
// cout << "Index = " << smallestIndex << endl;
// // cout << "Smallest = " << largest << endl;

// -------------------------------------------------> Linear Search Algo (finding target element)
// int targetArr(int arr[], int target, int sz){
//     for(int i = 0; i < sz; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main (){
//     int arr[]={ 4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;
//     int target = 50;

//     int res = targetArr( arr, target ,sz);
//     cout << res;

//     return 0;
// }