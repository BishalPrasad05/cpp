#include <iostream>
#include<math.h>
using namespace std;

void complement(int num)
{
    int result=0;
    int rem=0;
    int i=0;
    while(num>0)
    {
        rem=!(num&1);
        result+=pow(2,i)*rem;
        num>>=1;
        i++;

    }

    cout<<"The complement of the number is :"<<result<<endl;
}


int main(){
    complement(5);
    
    return 0;
}