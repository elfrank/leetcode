/**
* http://leetcode.com/onlinejudge#question_12
*
* Given an integer, convert it to a roman numeral.
*
* Input is guaranteed to be within the range from 1 to 3999.
*/

#include <map>
#include <string>

class Solution {
public:
	std::string intToRoman(int num) {
        
		std::map<int,std::string> table;
		table[1] = "I";
		table[4] = "IV";
        table[5] = "V";
		table[9] = "IX";
		table[10] = "X";
		table[40] = "XL";
		table[50] = "L";
		table[90] = "XC";
		table[100] = "C";
		table[400] = "CD";
		table[500] = "D";
		table[900] = "CM";
		table[1000] = "M";
		
		std::string result = "";
		std::map<int,std::string>::reverse_iterator reverse_it;
		for (reverse_it = table.rbegin(); reverse_it != table.rend(); ++reverse_it) {
			while(reverse_it->first <= num) {
				result += reverse_it->second;
				num -= reverse_it->first;
			}
		}
        return result;
    }
};