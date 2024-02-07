#include <iostream>
#include<vector>

using namespace std;

int main(){
    
    int count=0,n=0;

    vector<int> prime(n+1,true);
    prime[0]=prime[1]=0;
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        count++;
        for(int j=2*i;j<n;j=j+i)
        prime[j]=0;
    }
    cout<<"The no of prime numbers are :"<<count<<endl;
    
    return 0;
}