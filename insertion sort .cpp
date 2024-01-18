#include <iostream>

using namespace std;

int main(){
    int arr[8]={5,4,4,67,98,90,435,2};
    for(int i=1;i<8;i++)
    {
        int temp=i;
        for(int j=i;j>=0;j--)
        {
            if(arr[j]>arr[i])
                temp=j;
        }
        swap(arr[temp],arr[i]);
        cout<<"round "<<i+1<<" = ";
        for(int var:arr)
        cout<<var<<" ";
        cout<<endl;
    }
    for(int var:arr)
        cout<<var<<" ";
    cout<<endl;
    return 0;
}