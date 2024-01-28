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
    int s=0,e=0;
    int previous_space=0;
    for(int i=0;i<word.length();i++)
    {
        // cout<<typeid(word[i]).name()<<endl;
        if(isspace(word.at(i)))
        {
            
        }
    }
    // cout<<word[0:5]<<endl;
    return 0;
}