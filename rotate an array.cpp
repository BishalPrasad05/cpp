#include <iostream>

using namespace std;

void reverseArrayByKth(vector<int> arr[],int k)
{
    vector<int> arr2[arr.size()];
    for(int i=0;i<arr.size();i++)
    {
        arr2[(i+k)%arr.size()]=arr[i];
    }
    arr=arr2;
}

int main(){
    vector<int> arr[5]={1,2,3,4,5};
    reverseArrayByKth(arr,2);
    for(int var: arr)
    {
        cout<<var<<" ";
    }
    cout<<endl;

    return 0;
}