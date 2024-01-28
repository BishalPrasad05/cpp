#include <iostream>
// #include<String>
#include<cctype>

using namespace std;

// String reverseWord(String ,int start,int end)
// {
//     while(start<end)
//     {
        
//     }  
//     return 
// }

int main(){
    string word="Hello how are you";
    for(int i=0;i<word.length();i++)
    {
        // cout<<typeid(word[i]).name()<<endl;
        if(isspace(word.at(i)))
        cout<<i<<endl;
    }
    // cout<<word[0:5]<<endl;
    return 0;
}