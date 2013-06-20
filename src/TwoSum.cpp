/** http://leetcode.com/onlinejudge#question_1

Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2

**/

#include <vector>

class Solution {

public:
	std::vector<int> twoSum(std::vector<int> &numbers, int target) {
		
		std::vector<int> result;
		
		for(unsigned int i = 0; i < numbers.size(); ++i) {
			for(unsigned int j = numbers.size()-1; j>i; --j) {
				int sum = numbers[i]+numbers[j];
				if(target == sum) {
					result.push_back(i+1);
					result.push_back(j+1);
				}
			}
		}
		
		return result;
	}
};