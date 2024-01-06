#include <iostream>

using namespace std;

void sortingTheArray(int arr[])
{
    int size=sizeof(arr);
    int zero=0,one=0,two=0;
    int i=0;
    while(i<size){
        if(arr[i]==0)
            zero++;
        if(arr[i]==1)
            one++;
        if(arr[i]==2)
            two++;
        i++;         
    }
    for(int i=0;i<zero;i++) arr[i]=0;
    for(int i=zero;i<one;i++) arr[i]=1;
    for(int i=one;i<two;i++) arr[i]=2;
    cout<<size<<endl;
}

int main(){
    int arr[8]={0,0,1,0,1,0,2,2};
    sortingTheArray(arr);
    for(int i:arr)
        cout<<i<<" ";
    cout<<endl;
    
    return 0;
}