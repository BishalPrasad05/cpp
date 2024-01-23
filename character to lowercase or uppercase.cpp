#include <iostream>

using namespace std;

char toLowercase(int ch)
{
    if(ch>='a' && ch<='z')
        return ch;
    else{
        int res=ch-'A'+'a';
        return res;
    }
}

char toUppercase(int ch)
{
    if(ch<='A' && ch<='Z')
    return ch;
    else{
        
    }
}


int main(){
    cout<<"The output is :"<<toLowercase('z')<<endl;
    
    return 0;
}