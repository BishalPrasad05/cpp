#include <iostream>

using namespace std;

int main(){
    int start=90,end=203,mid,ans;
    int arr[4]={12,34,67,90};
    while(start<=end)
    {
        mid=(start+end)/2;
        page=0;
        count=1;
        for(int i=0;i<4;i++)
        {
            page+=arr[i];
            if(page>mid)
            {
                count++;
                page=arr[i];
            }
        }
        if(count<=2)
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"The answer is :"<<ans<<endl;
    return 0;
}