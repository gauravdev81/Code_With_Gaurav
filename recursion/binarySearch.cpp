#include <iostream>
using namespace std;

bool binarySearch(int arr[], int l, int r, int key)
{
    if (l>r)
        return false;

    else
    {
        int mid = l + (r - l) / 2;

        if (key == arr[mid])
            return true;

        else if (key < arr[mid])
        {
            return binarySearch(arr, l, mid - 1, key);
        }
        else
        {
            return binarySearch(arr, mid + 1, r, key);
        }
    }
}

int main()
{
    int arr[] = {2, 4, 7, 8, 14, 16};
    int size = 6;
    int key=7;

    bool ans = binarySearch(arr, 0, size - 1, key);

    if (ans)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }

    return 0;
}