/*
* http://leetcode.com/onlinejudge#question_15
*
* Given an array S of n integers, find three integers in S such that the
* sum is closest to a given number, target. Return the sum of the three
* integers. You may assume that each input would have exactly one solution.
*
* For example, given array S = {-1 2 1 -4}, and target = 1.
*
* The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
*/

#include <vector>
#include <cmath>
#include <algorithm>

class Solution {
public:
	int threeSumClosest(std::vector<int> &num, int target) {
        
		int closest = num[0]+num[1]+num[2];
		
		sort(num.begin(), num.end());
		
        int n = num.size();
		int j = 0;
		int k = 0;
		
		for(int i = 0; i < n-2; ++i) {
			j = i+1;
			k = n-1;
            
			while(j < k) {
				int sum = num[i] + num[j] + num[k];
				if(sum == target) {
					return sum;
				}
				
				int diff = abs(sum-target);
				int diffClosest = abs(closest-target);
				
				if(diff<diffClosest) {
					closest = sum;
				} else if(sum > target) {
					k--;
				} else {
					j++;
				}
			}
		}
		
        return closest;
    }
};