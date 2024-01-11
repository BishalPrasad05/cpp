#include <iostream>

using namespace std;


int leftmost(int arr[],int start,int end,int ans,int key)
{
    if(start>end)
        return ans;
    int mid=(start+end)/2;
    if(arr[mid]==key){
        ans=mid;
        end=mid-1;
    }
    else{
        if(arr[mid]<=key)
            leftmost(arr,start,end)
    }
}

int main(){
    
    return 0;
}