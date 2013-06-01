/*
* http://leetcode.com/onlinejudge#question_14
*
* Write a function to find the longest common prefix string amongst an array
* of strings.
*
*/

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        
        if(strs.size() == 0) {
            return "";
        }
        
        string prefix = strs[0];
        
        for(int length = 0; length < strs[0].size(); length++) {
            for (int j = 0; j < strs.size(); ++j) {
                if(prefix[length] != strs[j][length] || length == strs[j].size()) {
                    return prefix.substr(0,length);
                }
            }
        }
        
        return prefix;
    }
};