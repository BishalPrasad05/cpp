#include <iostream>

using namespace std;


bool isFeasible(int arr[],int mid)
{
    int count=1;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=arr[i];
        if(sum>mid){
            count++;
            sum=arr[i];
        }

    }
    if(count<=2)
        return true;
    return false;
}



int main(){
    int start=30,end=2;
    int arr[5]={19,9,30,22,7};
    int ans=0;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(isFeasible(arr,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        // int count=1;
        // int sum=0;
        // for(int i=0;i<4;i++){
        //     sum+=arr[i];
        //     if(sum>mid)
        //     {
        //         count++;
        //         sum=arr[i];
        //     }
        // }
        // if(count<=2)
        // {
        //     ans=mid;
        //     end=mid-1;
        // }
        // else{
        //     start=mid+1;
        // }
    }
    cout<<"The answer is "<<ans<<endl;
    return 0;
}