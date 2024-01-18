#include <iostream>

using namespace std;

void bubbleSort(int arr[]){
    // int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ;i<8;i++)
    {
        for(int j=0;j<7-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
        // cout<<"round "<<i<<" = ";
        // for(int var:arr)
        // cout<<var<<" ";
        // cout<<endl;
    }
}


int main(){
    int arr[8]={5,4,4,67,98,90,435,2};
    bubbleSort(arr);
    cout<<"\nfinal answer =";
    for(int var:arr)
        cout<<var<<" ";
    cout<<endl;
    return 0;
}