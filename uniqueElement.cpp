#include <iostream>

using namespace std;

int main(){
    int arr[9]={11,34,56,34,56,11,7,98,98};
    int result=0;
    for (int i=0 ;i<9;i++){
        result^=arr[i];
    }
    cout<<"The unique element is :"<<result<<endl;
    return 0;
}