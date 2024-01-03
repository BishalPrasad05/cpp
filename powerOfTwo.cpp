#include <iostream>
using namespace std;
void powerOf2(int num)
{
    int count=0;
    while(num>0)
    {
        if(num&1)
        {
                count++;
        }
        num>>=1;
    }
    count==1?cout<<"The number is power of 2\n":cout<<"The number is not a power of two \n";
}


int main(){
    powerOf2(32);
    
    return 0;
}