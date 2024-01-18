#include <iostream>

using namespace std;


int main(){
    int arr1[5]={1,3,0,0,0};
    int arr2[3]={2,4,6};
    int arr3[8]={0};
    int pointer1=0,pointer2=0;
    int i=0;
    while(pointer1<5 && pointer2<3)
    {
        if(arr1[pointer1]<=arr2[pointer2])
        {
            arr3[i]=arr1[pointer1];
            pointer1++;
        }
        else{
            arr3[i]=arr2[pointer2];
            pointer2++;
        }
        i++;
    }   
    while(pointer1<5)
    {
        arr3[i]=arr1[pointer1];
        pointer1++;
        i++;
    } 
    while(pointer2<3)
    {
        arr3[i]=arr2[pointer2];
        pointer2++;
        i++;
    } 
    for(int var:arr3)
        cout<<var<<" ";
    cout<<endl;
    return 0;
}