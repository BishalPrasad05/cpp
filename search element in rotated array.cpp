#include <iostream>

using namespace std;

// 6,7,9,1,2,3,4

int searchInRotatedArray(int arr,int start,int end,int key)
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
        if()
    }
}

int main(){
    
    return 0;
}