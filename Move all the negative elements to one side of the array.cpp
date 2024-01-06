#include <iostream>

using namespace std;

int* oneSide(int arr[],int size)
{
    int newarr[size];
    int start=0,end=size-1;
    while(size>0)
    {
        if(arr[size]>0)
        {
            newarr[end]=arr[size];
            end--;
        }
        else{
            newarr[start]=arr[size];
            start++;
        }
        size--;
    }
    return newarr;
}

int main(){
    
    return 0;
}