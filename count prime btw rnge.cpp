#include <iostream>

using namespace std;

int main(){
    
    int count=0,n=10;

    vector<int> prime(n-1,true);
    primt[0]=prime[1]=0;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        count++;
        for(int j=2*i;j<n;j+i)
        prime[j]=0;
    }
    count<<"The "
    return 0;
}