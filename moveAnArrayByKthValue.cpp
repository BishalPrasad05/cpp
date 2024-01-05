#include <iostream>

using namespace std;

int main(){
     int arr[7]={1,2,3,4,5,6,7};
    int arr2[7];
    int k=5;
    for (int i=0;i<7;i++){
        if(k>6)
            k=0;
        arr2[k]=arr[i];
        k++;

    }
     for(int i=0;i<7;i++){
        cout<<arr2[i]<<endl;
    }
    return 0;
}