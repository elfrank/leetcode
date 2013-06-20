/**
* http://leetcode.com/onlinejudge#question_34
*
* Given a sorted array of integers, find the starting and ending position of a given target value.
*
* Your algorithm's runtime complexity must be in the order of O(log n).
*
* If the target is not found in the array, return [-1, -1].
*
* For example,
* Given [5, 7, 7, 8, 8, 10] and target value 8,
* return [3, 4].
*
*/

#include <vector>

class Solution {
public:
	std::vector<int> searchRange(int A[], int n, int target) {
        
        int start = 0;
        int end = n-1;
        int m = 0;
        
        int a = -1;
        int b = -1;
        
		std::vector<int> result;
        
        result.push_back(a);
        result.push_back(b);
        
        while(end >= start) { 
            m = (end-start)/2+start;
            
            if(target < A[m]) {
                end = m-1;
            } else if(target > A[m]) {
                start = m+1;
            } else {
                a = m;
                b = m;
                break;
            }
        }
        
        if(-1==a) {
            return result;
        }
        
        
        while(a > 0 && target==A[a-1]) {
            a--;
        }
        
        while(b < (n-1) && target==A[b+1]) {
            b++;
        }
        
        result[0] = a;
        result[1] = b;
        
        return result;
    }
};