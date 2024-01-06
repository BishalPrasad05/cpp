#include <iostream>

using namespace std;

void oneSide(int arr[],int size)
{
    int newarr[size];
    size=size-1;
    int start=0,end=size-1;
    while(size>=0)
    {
        if(arr[size]>0)
        {
            newarr[end]=arr[size];
            end--;
        }
        else{
            newarr[start]=arr[size];
            start++;
        }
        size--;
    }
    for(int i:newarr)
        cout<<i<<" ";
    // return newarr;
}

int main(){

    int arr[8]={5,453,34,-1,6,-3,58,-2};
    oneSide(arr,8);
    // for(int i:s)
    //     cout<<i<<" ";
    // cout<<s<<endl;

    
    return 0;
}