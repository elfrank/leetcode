/**
* http://leetcode.com/onlinejudge#question_4
*
* There are two sorted arrays A and B of size m 
* and n respectively. Find the median of the two 
* sorted arrays. The overall run time complexity 
* should be O(log (m+n)).
**/

#include <climits>

double findMedianSortedArrays(int A[], int m, int B[], int n) {

	int count = static_cast<int>((m+n)*0.5);
	int m1 = -1;
	int m2 = -1;
	int i = 0;
	int j = 0;

	while(count >= 0) {
		
		int a = (i < m) ? A[i] : INT_MAX;
		int b = (j < n) ? B[j] : INT_MAX;
		m1 = m2;	
	
		if(a<b) {
			m2 = a;
			++i;
		} else {
			m2 = b;
			++j;
		}

		--count;
	}

	if(0==(m+n)%2) {
		return (m1+m2)*0.5;
	}

	return static_cast<double>(m2);
}
