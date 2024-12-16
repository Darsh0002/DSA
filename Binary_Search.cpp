// DARSH BALAR
#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2; // for bigger values of left and right we can use -->  mid = left + ((right-left)/2)
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cout << "Enter key: ";
    cin >> key;

    int position = binarySearch(arr, 10, key) + 1;

    if (position > 0)
        cout << "Position is: " << position << endl;
    else
        cout << "Not present !!" << endl;
    return 0;
}