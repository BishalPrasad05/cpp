#include <iostream>

using namespace std;

int peakElement(int arr[],int start,int end,int key)
{
    if(start>end)
        return key;
    int mid=(start+end)/2;
    if(arr[mid]>arr[mid+1])
    {
        key=mid;
        end=mid-1;
    }
    else
        start=mid+1;
    peakElement(arr,start,end,key);
}

int main(){
    int arr[7]={0,1,6,5,4,2,0};
    int peak=peakElement(arr,0,2,-1);
    cout<<"the peak element is at index :"<<peak<<endl;
    
    return 0;
}