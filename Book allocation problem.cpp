#include <iostream>

using namespace std;

void minMax(int arr[],int minMaxArr[]){
    int size=sizeof(arr);
    int max=0;
    for(int i=0 ;i<size;i++)
    {
        if(arr[i]>max){
            minMaxArr[0]=arr[i];
            max=arr[i];
        }
        minMaxArr[1]+=arr[i];
    }
}


int main(){
    int arr[]={10,10,20,30};
    int minMaxArr[2]={0};
    minMax(arr,minMaxArr);
    int start=minMaxArr[0],end=minMaxArr[1];
    while(start<end)
    {
        int mid=
    }
    
    
    return 0;
}