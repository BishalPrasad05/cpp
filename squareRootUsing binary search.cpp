//square root usign binary search
#include <iostream>

using namespace std;

long long int squareRoot(int num,int start,int end,long long int mid)
{
    mid=mid/2;
    if(mid*mid==num){
        return mid;
    }
    if(start>end)
        return mid;
    if(mid*mid>num)
    {
        end=mid-1;
    }
    else{
        start=mid+1;
    }
    squareRoot(num,start,end,mid);
}

int main(){
    int num=9;
    long long int val=squareRoot(num,1,num-1,-1);
    cout<<"The value= "<<val<<endl;
    
    return 0;
}