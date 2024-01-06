#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> arr={45,23,45,2,6,34,78,678};
    // int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr.begin(),arr.end());
    for (int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}