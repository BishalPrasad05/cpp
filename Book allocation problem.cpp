// #include <iostream>

// using namespace std;

// void minMax(int arr[],int minMaxArr[]){
//     int size=sizeof(arr);
//     int max=0;
//     for(int i=0 ;i<size;i++)
//     {
//         if(arr[i]>max){
//             minMaxArr[0]=arr[i];
//             max=arr[i];
//         }
//         minMaxArr[1]+=arr[i];
//     }
// }

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


// int main(){
//     int arr[4]={12,34,67,90};
//     int minMaxArr[2]={0,0};
//     minMax(arr,minMaxArr);
//     int start=90,end=203;
//     cout<<start<<" "<<end<<endl;
//     int ans=0;
//     int student=2;
//     while(start<end)
//     {
//         // int k=1;
//         int mid=(start+end)/2;
//         int val=isFeasible(arr,student,mid);
//         cout<<"is feasible :"<<val<<endl;
//         if(val<=student)
//         {
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }

//     cout<<"The value is :"<<ans<<endl;
    
    
//     return 0;
// }




// C++ program for optimal allocation of pages
#include <bits/stdc++.h>
using namespace std;

// Utility function to check if current minimum value
// is feasible or not.
bool isPossible(int arr[], int n, int m, int curr_min)
{
	int studentsRequired = 1;
	int curr_sum = 0;

	// iterate over all books
	for (int i = 0; i < n; i++) {
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

// function to find minimum pages
int findPages(int arr[], int n, int m)
{
	long long sum = 0;

	// return -1 if no. of books is less than
	// no. of students
	if (n < m)
		return -1;
	int mx = INT_MIN;

	// Count total number of pages
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		mx = max(mx, arr[i]);
	}

	// initialize start as 0 pages and end as
	// total pages
	int start = mx, end = sum;
	int result = INT_MAX;

	// traverse until start <= end
	while (start <= end) {
		// check if it is possible to distribute
		// books by using mid as current minimum
		int mid = (start + end) / 2;
		if (isPossible(arr, n, m, mid)) {
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

	// at-last return minimum no. of pages
	return result;
}

// Drivers code
int main()
{
	// Number of pages in books
	int arr[] = { 12, 34, 67, 90 };
	int n = sizeof arr / sizeof arr[0];
	int m = 2; // No. of students

	cout << "Minimum number of pages = "
		<< findPages(arr, n, m) << endl;
	return 0;
}

