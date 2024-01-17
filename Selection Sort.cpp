#include <iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[],int size)
{
    int temp=0;
    for(int i=0;i<size-2;i++){
        int j=i;
        for(j;j<size;j++)
        {
            if(arr[j]>arr[i])
             temp=j;
        }
        swap(arr[i],arr[j]);
    }

}

int main(){
    int arr[5]={50,4,23,555,3};    
    for(int i=0;i<5-1;i++)
    {
        int temp=i;
        for(int j=i;j<5;j++)
        {
            if(arr[j]<arr[i])
             temp=j;
        }
        swap(arr[temp],arr[i]); 
    }

    cout<<"The sorted array"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}