/**
* http://leetcode.com/onlinejudge#question_35
*
* Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
*
* You may assume no duplicates in the array.
*
* Here are few examples.
* [1,3,5,6], 5 → 2
* [1,3,5,6], 2 → 1
* [1,3,5,6], 7 → 4
* [1,3,5,6], 0 → 0
*/

class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        
        int start = 0;
        int end = n-1;
        int m = 0;
        int index = -1;
        
        
        while(end >= start) {
            m = (end-start)/2+start;
            if(A[m] > target) {
                end = m-1;
            } else if(A[m] < target) {
                start = m+1;
            } else {
                index = m;
                break;
            }
        }
        
        if(-1==index) {
           index = start;
        }
        
        return index;
        
    }
};