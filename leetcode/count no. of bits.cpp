#include <iostream>
#include<vector>

using namespace std;

int main(){
    int n=5;
    vector<int> bits(n+1);
    for(int i=0;i<=n;i++)
    {
        int count=0;
        while(i>0)
        {
            if(i&1)
            count++;
            i=i>>1;
        }
        bits[i]=count;
    }
    for(int i: bits)
    cout<<i<<endl;
    return 0;
}