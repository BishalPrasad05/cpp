#include <iostream>

using namespace std;

String reverseWord(int arr,int start,int end)
{
    while(start<end)
    {
        swap(arr[start],arr[end]);
    }    
}

int main(){
    
    return 0;
}