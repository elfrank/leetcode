#include <stack>
#include <string>

class Solution {
public:
     
	int longestValidParentheses(std::string s) {
		
		int n = s.size();
		if (n<2) {
			return 0;
		}
		
		int res = 0;
		int l = 0;
		int k = 0;

		for(int i = 0; i < n; ++i) {
			if ('('==s[i]) {
				k++;
				l++;
			} else {
				k--;
				l++;
			}

			if (0==k && l > res) {
				res = l;
			} else if(k<0) {
				k = 0;
				l = 0;
			}
		}

		l = 0;
		k = 0;

		for (int i = n-1; i > 0; --i) {
			if (')'==s[i]) {
				k++;
				l++;
			} else {
				k--;
				l++;
			}

			if (0==k && l > res) {
				res = l;
			} else if(k<0) {
				k = 0;
				l = 0;
			}
		}

		return res;
	}
};

int main() {
	Solution* pSolution = new Solution();
	int max = pSolution->longestValidParentheses(")()())()()(");

	return 0;
}