#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int low, int high, int search)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] < search)
        {
            low = mid+1;
        }
        else if (arr[mid] > search)
        {
            high = mid-1;
        }
    }
}

void solve()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search;
    cout << "Enter number to search: ";
    cin >> search;

    int low = 0, high = n - 1;
    int ind = binarySearch(arr, n, low, high, search);
    // array, array size, low index of range, high index of range,element to search | returns index;
    cout << search << " is at index " << ind;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}