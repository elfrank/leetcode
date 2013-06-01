/*
* http://leetcode.com/onlinejudge#question_15
*
* Given an array S of n integers, are there elements a, b, c in S such 
* that a + b + c = 0? Find all unique triplets in the array which gives
* the sum of zero.
*
* Note:
*
* Elements in a triplet (a,b,c) must be in non-descending order. 
* (ie, a ? b ? c)
*
* The solution set must not contain duplicate triplets.
* For example, given array S = {-1 0 1 2 -1 -4},
*
* A solution set is:
* (-1, 0, 1)
* (-1, -1, 2)

*/

#include <vector>
#include <set>

class Solution {
public:
    std::vector<std::vector<int> > threeSum(std::vector<int> &num) {
        
    	if(num.size()<3) {
			return std::vector<std::vector<int> >();
		}
		
		sort(num.begin(), num.end());
        set<std::vector<int> > result_set;
		
        int n = num.size();
		int j = 0;
		int k = 0;
		
		for(int i = 0; i < n-2; ++i) {
			j = i+1;
			k = n-1;
            
			while(j < k) {
				int sum = num[i] + num[j] + num[k];
                if(sum > 0) {
                    k--;
                } else if(sum < 0) {
                    j++;
				} else {
					std::vector<int> triplet;
					triplet.push_back(num[i]);
					triplet.push_back(num[j]);
					triplet.push_back(num[k]);
					
					result_set.insert(triplet);
                    
                    j++;
                    k--;
				}
			}
		}
		
        std::vector<std::vector<int> > result(result_set.begin(),result_set.end());
		return result; 
    }
};