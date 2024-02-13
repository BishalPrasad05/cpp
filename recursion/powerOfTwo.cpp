#include <iostream>

using namespace std;

int powerOfTwo(int i,int num)
{
    if(i==0)
    return num;
    num=2*powerOfTwo(i-1,num);
    return num;
}


int main(){

    cout<<"The power of 2 :"<<powerOfTwo(3,1)<<endl;
    
    return 0;
}