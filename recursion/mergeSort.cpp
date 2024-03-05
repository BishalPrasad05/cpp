#include <iostream>

using namespace std;

void mergeSort(int arr[], int s, int e)
{
    if (s > e)
    {
        return;
    }
    int size = sizeof(arr) / 4;
    for (int i = s; i <= e; i++)
        cout << arr[i] << " ";
    cout << endl;
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 5);

    return 0;
}