#include <iostream>
#include<math.h>
using namespace std;


void DecToBin(int dec){
    int bin=0;
    int i=0;
    int bit;
    while(dec>0){
        bit=dec&1;
        bin+=bit*pow(10,i);
        dec=dec>>1;
        i++;
    }
    cout<<"The binary value is :"<<bin<<endl;
}



int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    DecToBin(num);
    return 0;
}