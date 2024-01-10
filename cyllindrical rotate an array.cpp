#include <iostream>

using namespace std;

void rotate(int arr[],int k){
    int size=sizeof(arr);
    int arr2[size];
    for(int i=0;i<size;i++)
    {
        if(k==size){
            k=0;
        }
        arr2[k]=arr[i];
        k++;
    }
    for(int i:arr2){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    rotate(arr,5);

    return 0;
}