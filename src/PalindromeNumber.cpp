/* 
* http://leetcode.com/onlinejudge#question_9
*
* Determine whether an integer is a palindrome. Do this without extra 
* space.
*
* Some hints:
* Could negative integers be palindromes? (ie, -1)
*
* If you are thinking of converting the integer to string, note the 
* restriction of using extra space.
*
* You could also try reversing an integer. However, if you have solved
* the problem "Reverse Integer", you know that the reversed integer 
* might overflow. How would you handle such case?
*
* There is a more generic way of solving this problem.
*
*/

class Solution {
public:
    bool isPalindrome(int x) {
        
        
        if(x < 0) {
            return false;
        }
        
        int digits = 1;
        
        while(x/digits >= 10) {
            digits *= 10;
        }
        
        while(x) {
            int left = x/digits;
            int right = x%10;
            if(left != right) {
                return false;
            }
            x = (x%digits)/10;
            digits /= 100;
        }
        
        return true;
        
    }
};