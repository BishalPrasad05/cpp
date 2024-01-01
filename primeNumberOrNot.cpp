#include <iostream>
#include<math.h>
using namespace std;

void primeNumber(int n){
    int sqr=sqrt(n);
    cout<<"The sqrt of the number is :"<<sqr<<endl;
    for(int i=2;i<=sqr;i++){
        if(n%i==0){
            cout<<"Not a prime Number"<<endl;
            return;
        }
    }
    cout<<"The number is a Prime Number "<<endl;
}


int main(){
    int num=67;
    primeNumber(num);
    return 0;
}