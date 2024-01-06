#include <iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main(){
    vector<int> arr={45,23,45,2,6,34,78,678};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // sort(arr.begin(),arr.end());
    set<int> s(arr.begin(),arr.end());
    for (int i:s){
        cout<<i<<" ";
    }
    
    auto it=next(s.begin(),3);

    
    cout<<*it<<endl;
    return 0;
}