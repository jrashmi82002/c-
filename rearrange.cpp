/* C++ program to rearrange 
positive and negative integers 
in alternate fashion while keeping 
the order of positive and negative numbers. */
#include <assert.h>
#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int A[n], B[n], a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            A[a] = arr[i];
        else
            B[b] = arr[i];
    }
    int x = a, y = b;
    a = b = 0;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && a < x)
        {
            arr[i] = B[b];
            b++;
        }
        else if (i % 2 != 0 && b < y)
        {
            arr[i] = A[a];
            a++;
        }
        else
        {
            z = i;
            break;
        }
    }
    while (a < x)
    {
        arr[z] = A[a];
        a++;
        z++;
    }
    while (b < y)
    {
        arr[z] = B[b];
        b++;
        z++;
    }
}

// A utility function to print an array 'arr[]' of size 'n'
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{

    int arr[] = {5, -2, 5, 2,
                 4, 7, 1, 8, 0, -8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array is \n";
    printArray(arr, n);

    rearrange(arr, n);

    cout << "Rearranged array is \n";
    printArray(arr, n);

    return 0;
}
