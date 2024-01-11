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
        leftmost(arr,start,end,ans,key);
    }
    else{
        if(key<=arr[mid])
            leftmost(arr,start,mid-1,ans,key);
        else
            leftmost(arr,mid+1,end,ans,key);
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,6,6,6,6};
    int val=leftmost(arr,0,9,-1,6);
    cout<<"value ="<<val<<endl;
    return 0;
}