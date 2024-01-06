#include <iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

// The time complexity of the below code is O(N*LogN)
 
int KthLargestElement_NlogN(int arr[],int k)
{
    set<int> n(arr,arr+7);
    auto it=n.begin();
    advance(it,k-1);
    // Or
    // auto it=next(n.begin(),k);
    return *it;
}





int main(){
    int arr[8]={45,23,45,2,6,34,78,678};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // sort(arr.begin(),arr.end());
    // set<int> s(arr.begin(),arr.end());
    // for (int i:s){
    //     cout<<i<<" ";
    // }

    // auto it=next(s.begin(),3);

    
    cout<<KthLargestElement(arr,3)<<endl;
    return 0;
}