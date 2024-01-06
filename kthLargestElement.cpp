#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> arr={45,23,45,2,6,34,78,678};
    sort(arr,arr.begin()+7);
    return 0;
}