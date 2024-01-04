#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    time_t startTime,endTime;
    startTime=clock();
    int N=6;
    int arr[N]={1,2,3,4,5,5};
    int result1=0,result2=0;
    for(int i=0;i<N;i++)
    {
        if(i<=N-2){
            result2^=i+1;            
        }
        result1^=arr[i];
    }
    int n=0;
   long double t;
    while(n<100000000)
        n++;
    cout<<"The repeated element is :"<<(result1^result2)<<endl;
    endTime=clock();
    t=endTime-startTime;
    cout<<"The time is :"<<(t)<<setprecision(20)<< endl;
    return 0;
}