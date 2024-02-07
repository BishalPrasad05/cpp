#include <iostream>
#include<vector>

using namespace std;

int main(){
    int n=5;
    vector<int> bits(n+1);
    cout<<"yoooooooooo";
    for(int i=0;i<=n;i++)
    {
        cout<<"yes";
        int count1=0;
        int j=i;
        while(j>0)
        {
            cout<<"no";
            if(j&1)
            count1++;
            j=j>>1;
        }
        bits[i]=count1;
    }
    for(int i=0;i<=n;i++)
    cout<<bits[i]<<endl;
    return 0;
}