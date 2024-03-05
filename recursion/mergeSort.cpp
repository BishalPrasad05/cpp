#include <iostream>

using namespace std;

void mergeSort(int arr[],int s,int e)
{
    if(s>e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr,mid+1,e);
}

int main(){
    
    return 0;
}