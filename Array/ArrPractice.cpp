#include <iostream>
#include <climits>
#include <vector>
using namespace std;

//  ------------------------------------------------------> Min & Max number in array
// int smallestInArray(int arr[], int sz)
// {   int small = INT_MAX;
//     for (int i = 0; i < sz; i++)
//     {
//         if (arr[i] < small)
//         {
//             small = arr[i];
//         }
//     }

//     return small;
// }
// int largestInArray(int arr[], int sz)
// {   int larg = INT_MIN;
//     for (int i = 0; i < sz; i++)
//     {
//         if (arr[i] > larg)
//         {
//             larg = arr[i];
//         }
//     }

//     return larg;
// }

// int main()
// {
//     int arr[] = {10, 2, 50, 0 ,-1, 300, -10};
//     int sz = sizeof(arr)/sizeof(arr[0]);

//     cout << "smallest Number in arr is = " << smallestInArray(arr, sz) << endl;
//     cout << "largest Number in arr is = " << largestInArray(arr, sz) << endl;

//     return 0;
// }

//  ------------------------------------------------------> Min & Max SUM in array

int largest(vector<int>& arr)
{
    int max = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    vector<int> arr = {10, 2, 44, 837, 999};
    cout << largest(arr);
    return 0;
}