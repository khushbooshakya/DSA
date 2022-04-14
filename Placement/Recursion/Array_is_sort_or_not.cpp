// Check weather if the array is sort or not using recursion
#include <iostream>
using namespace std;
bool is_sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true; // ager array ka size 0 or 1 hoga to bo sorted hi hogaa
    }
    if (a[0] > a[1]) // ager a[0]>a[1] thn false return kyuki hme increasing order mai sort krna hai
    {
        return false;
    }
    bool isSmaller = is_sorted(a + 1, size - 1); // agr age ka sort hai to next element par point krke same condition check kro
    return isSmaller;
}
int main()
{
    int a[5] = {2, 3, 4, 5, 6};
    cout << is_sorted(a, 5);
}