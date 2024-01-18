#include <iostream>

using namespace std;

int main(){
    int arr[8]={5,4,4,67,98,90,435,2};
    for(int i=0 ;i<8;i++)
    {
        for(int j=0;j<7-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
    for(int var:arr)
        cout<<var<<" ";
    cout<<endl;
    return 0;
}