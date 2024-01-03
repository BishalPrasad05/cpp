#include <iostream>

using namespace std;

void swapArray(int arr[],int size){
    int start=0,end=size-1;
    int temp=0;
    while(start<=end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

int main(){
    int arr[5]={1,2,3,4,5};
    swapArray(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";    
    }
    cout<<endl;
    
    return 0;
}