/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.
*/
#include <iostream>
using namespace std;
// user defined array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// printing unique element in array
void unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << ans;
}
int main()
{
    int n;
    int arr[n];
    cout << "Enter array size:" << endl;
    cin >> n;

    cout << "Enter numbers: " << endl;
    printArray(arr, n);

    cout << "Unique Element: ";
    unique(arr, n);
}