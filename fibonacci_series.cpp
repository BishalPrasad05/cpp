#include <iostream>

using namespace std;


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
    return 0;
}