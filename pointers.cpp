#include <iostream>

using namespace std;

int main(){
    int num=6;
    cout<<"The value of num :"<<num<<endl;
    cout<<"The address of num :"<<&num<<endl;
    int *p=0;
    p=&num;
    cout<<"The pointer value of p :"<<*(p+1)<<endl;
    return 0;
}