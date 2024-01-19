#include <iostream>

using namespace std;

int main(){
    int arr1[4]={1,2,3,4};
    int arr2[2]={8,9};
    int p1=3,p2=1,rem=0,carry=0;
    for(int i=0;i<2;i++){
        carry=arr1[p1];
        arr1[p1]=(arr1[p1]+arr2[p2]+rem)%10;
        rem=(arr1[p1]+arr2[p2]+rem)/10;

        
        p1--;
        p2--;
    }
    for(int var: arr1)
        cout<<var<<" ";
    cout<<endl;

    return 0;
}