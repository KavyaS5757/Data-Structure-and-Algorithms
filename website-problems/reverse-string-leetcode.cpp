void reverseString(vector<char>&s)
    {
        int i=0;
        vector<char> a(s.size(), ' ');

        for(i=0; i<s.size(); i++)
        {
            a[i] = s[s.size()-1-i];
        }
        s=a;
    }

/*
https://leetcode.com/problems/reverse-string/
*/
