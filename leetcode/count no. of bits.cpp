#include <iostream>
#include<vector>

using namespace std;

int main(){
    int n=5;
    vector<int> bits(n+1);
    for(int i=0;i<=n;i++)
    {
        int count=0;
        int j=i;
        while(j>0)
        {
            if(j&1)
            count++;
            j=j>>1;
        }
        bits[i]=count;
    }
    for(int i=0;i<n;i++)
    cout<<bits[i]<<endl;
    return 0;
}