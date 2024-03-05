#include <iostream>

using namespace std;

int arr2[5];

void Merge(int arr[], int start, int end)
{
    cout << arr[start] << " " << arr[end] << endl;
    // if (s == e)
    // {
    //     cout << arr[s] << endl;
    //     return;
    // }
    // for (int i = s; i <= e; i++)
    //     cout << arr[i] << " ";
    // cout << endl;
}

void MSort(int arr[], int start, int end)
{
    // cout << arr[start] << " " << arr[end] << endl;
    if (start >= end)
        return;
    int mid = (start + end) / 2;

    MSort(arr, start, mid);
    MSort(arr, mid + 1, end);
    Merge(arr, start, end);
}

int main()
{
    int arr[6] = {5, 4, 3, 2, 1, 0};
    MSort(arr, 0, 5);

    return 0;
}