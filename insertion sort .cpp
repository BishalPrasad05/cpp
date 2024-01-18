#include <iostream>

using namespace std;

int main(){
    int arr[4]={5,8,2,6};
    for(int i=1;i<4;i++)
    {
        int temp=i;
        for(int j=i;j>=0;j--)
        {
            if(arr[j]>arr[temp]){
                swap(arr[j],arr[temp]);
                temp--;
            }
        }
        
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