#include <iostream>
#include<math.h>

using namespace std;

void negDecToBin(int num){
    // num*=-1;
    // num=~num;
    // cout<<num<<endl;
    // num+=1;
    // cout<<num<<endl;
    int rem=0;
    int i=0;
    long long int bin=0;
    while (i<10){
        rem=num&1;
        bin+=pow(10,i)*rem;
        cout<<(num&1)<<endl;
        num=num>>1;
        i++;
    }
    cout<<bin<<endl;
}

int main(){
    negDecToBin(-11);
    
    return 0;
}