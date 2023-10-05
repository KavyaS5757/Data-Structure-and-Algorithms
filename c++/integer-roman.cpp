class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        int n[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string str[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        for(int i=0;i<13;i++)
        {
            while(num>=n[i])
            {
                result += str[i];
                num = num - n[i];
            }
        }
        return result;
    }
};

/*
https://leetcode.com/problems/integer-to-roman/submissions/
*/
