#include <iostream>

using namespace std;

int peakElement(int arr[],int start,int end,int key)
{
    if(start>end)
        return key;
    int mid=(start+end)/2;
    if(arr[mid]>arr[mid+1])
        end=mid-1;
    else
}

int main(){
    
    return 0;
}