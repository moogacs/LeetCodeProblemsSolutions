/*

Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers which has the largest sum.

Note:

This complexity of this solution is O(n).

*/

#include<bits/stdc++.h>
using namespace std; 

int maxSubArraySum(int a[], int size) 
{ 
	int max_so_far = INT_MIN, max_ending_here = 0; 

	for (int i = 0; i < size; i++) 
	{ 
		max_ending_here = max_ending_here + a[i]; 
		if (max_so_far < max_ending_here) 
			max_so_far = max_ending_here; 

		if (max_ending_here < 0) 
			max_ending_here = 0; 
	} 
	return max_so_far; 
} 

/*Driver function to test maxSubArraySum*/
int main() 
{
    //Read input
	int i,n;
	cin>>n;
	int a[n];
	for (i = 0; i < n; i++)
	    cin>>a[i];
	int max_sum = maxSubArraySum(a, n); 
	cout << "Maximum contiguous sum is " << max_sum; 
	return 0; 
} 
