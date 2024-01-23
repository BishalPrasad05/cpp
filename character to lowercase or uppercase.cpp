#include <iostream>

using namespace std;

char toLowercase(int ch)
{
    if(ch>'a' && ch<'z')
        return ch;
    else{
        int res=ch='A'+'a';
        return res;
    }
}


int main(){
    cout<<"The output is :"<<toLowercase('B')<<endl;
    
    return 0;
}