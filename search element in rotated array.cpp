#include <iostream>

using namespace std;

// 6,7,9,1,2,3,4

int searchInRotatedArray(int arr[],int start,int end,int key)
{
    if(start>end)
        return key;
    int mid=(start+end)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[mid]>key){
        end=mid-1;
    }
    else{
        if(key>arr[end])
            end=mid-1;
        else
            start=mid+1;
    }
    searchInRotatedArray(arr,start,end,key);
}

int main(){
    int arr[7]={6,7,9,1,2,3,4};
    int val=searchInRotatedArray(arr,0,6,2);
    cout<<"The value find at index  :"<<val<<endl;
    
    return 0;
}