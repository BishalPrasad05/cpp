#include <iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[],int size)
{
    int temp=0;
    for(int i=0;i<size-1;i++){
        int j=i;
        for(j+1;j<size-1;j++)
        {
            if(arr[j]<arr[i])
             temp=arr[j];
        }
        swap(arr[i],temp)
    }

}

int main(){
    
    return 0;
}