#include <iostream>
#include<math.h>
using namespace std;

void BinToDec(int bin)
{
    int dec=0;
    int i=0;
    int rem=0;
    while(bin>0){
        rem=bin%10;
        dec+=pow(2,i)*rem;
        bin/=10;
        i++;
    }
    cout<<"The decimal value is :"<<dec<<endl;
}

int main(){
    int decimal=1011;
    BinToDec(decimal);
    return 0;
}