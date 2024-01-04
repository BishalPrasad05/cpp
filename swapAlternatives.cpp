#include <iostream>
using namespace std;

void swapAlternatives(int arr[], int size)
{
    int next=0;
    int temp;
    for(int i=0;i<size;i=i+2){
        next=i+1;
        if(next<=size-1)
        {
            temp=arr[i];
            arr[i]=arr[next];
            arr[next]=temp;
        }
    }
}

int main(){
    // int arr[7]={1,2,3,4,5,6,7};
    // swapAlternatives(arr,7);
    // for(int i=0;i<7;i++){
    //     cout<<arr[i]<<" ";
    // }

    short int i=1;
    while([1,0]){
        cout<<i<<endl;
        i++;
    }
    cout<<"while ended"<<endl;
    return 0;
}