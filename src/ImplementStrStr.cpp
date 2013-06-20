/**
* http://leetcode.com/onlinejudge#question_28
*
* Implement strStr().
*
* Returns a pointer to the first occurrence of needle in haystack, or null
* if needle is not part of haystack.
*/
#include <string>

class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        
        int n1 = strlen(haystack);
        int n2 = strlen(needle);
        
        if(n2>n1) {
            return NULL;
        }
        
        if(0 == n2) {
            return haystack;
        }
        
        int i = 0, j = 0;
        while (i < (n1-n2+1)) {
            j = 0;
            while (j<n2 && haystack[i] == needle[j]) {
                j++;
                i++;
            }
            
            if(j==n2) {
                return haystack+i-j;
            }
            i = i-j+1;
        }
        
        return NULL;
    }
};