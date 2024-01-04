#include <iostream>
#include<limits.h>
using namespace std;


int main(){
    int arr[10]={21,32,54,6,7,4,0,234,26,65};
    int max=INT_MIN;
    int min=INT_MAX;
    for(int a:arr){
        if(a>max)
            max=a;

        if(a<min)
            min=a;

    }
    cout<<"min="<<min<<" and max = "<<max<<endl;
    return 0;
}