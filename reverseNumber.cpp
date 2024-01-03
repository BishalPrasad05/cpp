#include <iostream>

using namespace std;

void ReverseNumber(int num)
{
    int result=0;
    int rem=0;
    while(num>0){
        rem=num%10;
        result=result*10+rem;
        num/=10;
    }
    cout<<"The reversed number is :"<<result<<endl;
}



int main(){
    int number;
    cout<<"Enter the number :";
    cin>>number;
    ReverseNumber(number);
    return 0;
}