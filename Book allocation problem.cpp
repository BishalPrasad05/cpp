#include <iostream>

using namespace std;

void minMax(int arr[],int minMaxArr[]){
    int size=sizeof(arr);
    int max=0;
    for(int i=0 ;i<size;i++)
    {
        if(arr[i]>max){
            minMaxArr[0]=arr[i];
            max=arr[i];
        }
        minMaxArr[1]+=arr[i];
    }
}

// int isFeasible(int arr[],int student,int mid)
// {
//     int size=sizeof(arr);
//     int k=1;
//     int ans=0;
//     for(int i=0 ;i<size;i++)
//     {
//         ans+=arr[i];
//         if(ans>mid)
//         {
//             ans=arr[i];
//             k++;
//         }
//         // else{
//         //     ans+=arr[i];
//         // }
//         cout<<"k= "<<k<<endl;

//     }

//     int res=k;

//     cout<<"res = "<<res<<endl;

//     return k;

// }


bool isPossible(int arr[],int m, int curr_min)
{
	int studentsRequired = 1;
	int curr_sum = 0;

	// iterate over all books
	for (int i = 0; i < sizeof(arr); i++) {
		// check if current number of pages are greater
		// than curr_min that means we will get the result
		// after mid no. of pages
		if (arr[i] > curr_min)
			return false;

		// count how many students are required
		// to distribute curr_min pages
		if (curr_sum + arr[i] > curr_min) {
			// increment student count
			studentsRequired++;

			// update curr_sum
			curr_sum = arr[i];

			// if students required becomes greater
			// than given no. of students,return false
			if (studentsRequired > m)
				return false;
		}

		// else update curr_sum
		else
			curr_sum += arr[i];
	}
	return true;
}


int main(){
    int arr[4]={12,34,67,90};
    int minMaxArr[2]={0,0};
    minMax(arr,minMaxArr);
    int start=90,end=203;
    cout<<start<<" "<<end<<endl;
    int ans=0;
    int student=2;
    // while(start<end)
    // {
    //     // int k=1;
    //     int mid=(start+end)/2;
    //     // int val=isFeasible(arr,student,mid);
    //     // cout<<"is feasible :"<<val<<endl;
    //     if(isPossible(arr,student,mid))
    //     {
    //         ans=mid;
    //         end=mid-1;
    //     }
    //     else{
    //         start=mid+1;
    //     }
    // }
     while (start <= end) {
        // check if it is possible to distribute
        // books by using mid as current minimum
        int mid = (start + end) / 2;
        if (isPossible(arr,student, mid)) {
            // update result to current distribution
            // as it's the best we have found till now.
            result = mid;
 
            // as we are finding minimum and books
            // are sorted so reduce end = mid -1
            // that means
            end = mid - 1;
        }
 
        else
            // if not possible means pages should be
            // increased so update start = mid + 1
            start = mid + 1;
    }

    cout<<"The value is :"<<ans<<endl;
    
    
    return 0;
}