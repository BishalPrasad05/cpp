#include <iostream>

using namespace std;


int main(){
    int arr[8]={5,4,4,67,98,90,435,2};
    cout<<"size ="<<(sizeof(arr)/sizeof(arr[0]))<<endl;
    for(int i=0 ;i<8;i++)
    {
        for(int j=0;j<7-i;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
        cout<<"round "<<i+1<<" = ";
        for(int var:arr)
        cout<<var<<" ";
        cout<<endl;
    }
    cout<<"\nfinal answer =";
    for(int var:arr)
        cout<<var<<" ";
    cout<<endl;
    return 0;
}