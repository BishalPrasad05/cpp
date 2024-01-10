#include <iostream>

using namespace std;

int binarySearch(int arr[],int start,int end,int key)
{
    if(start>end)
        return -1;
    int mid=(start+end)/2;
    if(arr[mid]==key)
        return mid;
    else{
        if(key>arr[mid])
            binarySearch(arr,mid+1,end,key);
        else   
            binarySearch(arr,start,mid-1,key);
    }
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    int val=binarySearch(arr,0,7,100);
    cout<<"val found at index ="<<val<<endl;
    
    return 0;
}