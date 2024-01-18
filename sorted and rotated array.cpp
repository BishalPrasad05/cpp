#include <iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> nums={4,5,6,1,2,3,4};
     int cnt = 0;
        for(int i=1;i<nums.size();i++) 
        {
            if(nums[i] < nums[i-1])
                cnt++;
        }
        if(nums[nums.size()-1] > nums[0])
            cnt++;
        
        cout<<"The value of count ="<<(cnt)<<endl;
    
    return 0;
}