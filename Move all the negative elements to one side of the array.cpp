#include <iostream>

using namespace std;

void oneSide(int arr[],int newarr[],int size)
{
    // int newarr[size];
    int start=0,end=size-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            newarr[end]=arr[i];
            end--;
        }
        else{
            newarr[start]=arr[i];
            start++;
        }
       
    }
    // for(int i:newarr)
    //     cout<<i<<" ";
}


void oneSide2(int arr[])
{
    int start=0,end=7;
    while(start<end)
    {
        if(arr[start]>0)
        {
            swap(arr[start],arr[end]);
            end--;
            continue;
        }
        start++;

    }
}

int main(){

    int arr[8]={5,453,34,-1,6,-3,58,-2};
    // int newarr[8];
    // oneSide(arr,newarr,8);
    // for(int i=0;i<8;i++)
    //     cout<<newarr[i]<<" ";
    // cout<<endl;

    oneSide2(arr);
    for(int i:arr)
     cout<<i<<" ";
    cout<<endl;
    return 0;
}