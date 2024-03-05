#include <iostream>

using namespace std;

void MSort(int arr[], int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    cout << arr[start] << endl;
    MSort(arr, start, mid);
    MSort(arr, mid + 1, end);
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    MSort(arr, 0, 4);

    return 0;
}