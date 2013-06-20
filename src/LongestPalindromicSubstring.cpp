
#include <string>

class Solution {
public:

	int isPalindrome(std::string &s, int &start, int &end) {
    
        bool isPalindrome = true;
        int length = end-start+1;
        for(int i = 0; i < length/2; ++i) {
                if(s[start+i] != s[end-i]) {
                        isPalindrome = false;
                        break;
                }
        }

        return isPalindrome;
    }
    
	std::string longestPalindrome(std::string s) {
  
		std::string longest = "";
        int maxi = 0;
        int maxLength = 0;
        int n = s.size();
        
        for(int i = 0; i < n; ++i) {
            for(int j = n-1; j >= i; --j) {
                if(isPalindrome(s,i,j)) {
                    int length = j-i+1;
                    if(length>maxLength) {
                        maxi = i;
                        maxLength = length;
                    }
                    break;
                }
            }
        }
        
        longest = s.substr(maxi,maxLength);   
        
        return longest;
        
    }
};