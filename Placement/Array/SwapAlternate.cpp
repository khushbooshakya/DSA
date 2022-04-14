/* Swap Alternate array:
Input: arr[5]={1,2,7,8,5};
Output: {2,1,8,7,5}

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

// swap array
void swap(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // printing the swap array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    int arr[n];
    cout << "Enter array size:" << endl;
    cin >> n;

    cout << "Enter numbers: ";
    printArray(arr, n);

    cout << "Array List after Swapping:" << endl;
    swap(arr, n);
}