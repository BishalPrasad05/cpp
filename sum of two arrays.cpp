#include <iostream>

using namespace std;

int main(){
    int arr1[4]={1,5,3,4};
    int arr2[2]={8,0};
    int p1=3,p2=1,rem=0,carry=0,down=0;
    for(int i=0;i<3;i++){
        // cout<<rem<<endl;
        if(p2>=0)
            down=arr2[p2];
        else
            down=0;
        carry=arr1[p1];
        arr1[p1]=(arr1[p1]+down+rem)%10;
        rem=(carry+down+rem)/10;

        
        p1--;
        p2--;
        
    }
    for(int var: arr1)
        cout<<var<<" ";
    cout<<endl;

    return 0;
}