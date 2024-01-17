// #include <iostream>

// using namespace std;

// int main(){
//     int start=90,end=203,mid,ans;
//     int arr[4]={12,34,67,90};
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         int page=0;
//         int count=1;
//         for(int i=0;i<4;i++)
//         {
//             page+=arr[i];
//             if(page>mid)
//             {
//                 count++;
//                 page=arr[i];
//             }
//         }
//         if(count<=2)
//         {
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     cout<<"The answer is :"<<ans<<endl;
//     return 0;
// }



#include <iostream>

using namespace std;


bool isFeasible(int arr[],int mid)
{
    int count=0;
    int sum=0;
    for(int i=0;i<4;i++)
    {
        sum+=arr[i];
        if(sum>mid){
            count++;
            sum=arr[i];
        }

    }
    if(sum>=2)
        return true;
    return false;
}



int main(){
    int start=90,end=203;
    int arr[4]={12,34,67,90};
    int ans=0;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(isFeasible){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"The answer is "<<ans<<endl;
    return 0;
}