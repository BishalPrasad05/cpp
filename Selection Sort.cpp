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
    int arr[5]={5,4,3,2,1};
    selectionSort(arr,5);
    cout<<"The sorted array"<<endl;
    for(int i=0;i<5;i++)
    {
        int j=i;
        for(j;j<size;j++)
        {
            if(arr[j]>arr[i])
             temp=j;
        }
        swap(arr[i],arr[j]);
        
    }


    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}