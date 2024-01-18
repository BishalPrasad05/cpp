#include <iostream>

using namespace std;

int main(){
    int arr[8]={1,0,3,9,0,6,0,0};
    int start=0,end=7;
    while(start<end)
    {
        if(arr[start]!=0)
        start++;
        if(arr[end]==0)
         end--;
        if(arr[start]==0 && arr[end]!=0)
            swap(arr[start],arr[end]);

    }
    for(int var:arr)
    cout<<var<<" ";
    cout<<endl;
    return 0;
}