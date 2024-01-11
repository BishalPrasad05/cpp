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
        if(arr[mid]>=key)
            leftmost(arr,start,end,ans,key);
        else
            leftmost(arr,mid+1,end,ans,key);
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int val=leftmost(arr,0,5,-1,7);
    cout<<"value ="<<val<<endl;
    return 0;
}