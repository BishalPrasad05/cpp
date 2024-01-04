#include <iostream>
#include<ctime>

using namespace std;

int main(){
    time_t startTime;
    startTime=time(NULL);
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
    cout<<"The repeated element is :"<<(result1^result2)<<endl;
    time_t endTime=time(NULL);
    cout<<"The time is :"<<(endTime-startTime)<<endl;
    return 0;
}