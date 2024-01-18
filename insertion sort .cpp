#include <iostream>

using namespace std;

int main(){
    int arr[4]={5,8,2,6};
    for(int i=1;i<4;i++)
    {
        int temp=i;
        // or temp=arr[i];
        for(int j=i;j>=0;j--)
        {
            if(arr[j]>arr[temp]){
                swap(arr[j],arr[temp]);
                temp--;
                // or arr[j+1]=arr[j];
            }
        }
        
        cout<<"round "<<i<<" = ";
        for(int var:arr)
        cout<<var<<" ";
        cout<<endl;
    }
    cout<<"The sorted array is : ";
    for(int var:arr)
        cout<<var<<" ";
    cout<<endl;
    return 0;
}