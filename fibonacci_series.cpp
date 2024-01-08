#include <iostream>

using namespace std;


void fibo(int first,int second,int k)
{
    if(k==0)
        return;
    else{
        cout<<first<<" ";
        fibo(second,first+second,k-1);
    }
    cout<<endl;
}


void fibonacci(int ran){
    int first=0;
    int second=1;
    if(ran==1)
        cout<<first<<" ";
    else{
        cout<<first<<" ";
        int next=second;
        for(int i=1;i<ran;i++){ 
            cout<<next<<" ";
            next=first+second;
            first=second;
            second=next;
        }
        cout<<endl;
    }
}

int main(){
    
    int range;
    cout<<"Enter the range :";
    cin>>range;
    
    fibonacci(range);
    
    cout<<"Using recursion\n";
    fibo(0,1,range);
    return 0;
}