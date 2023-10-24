string toLowerCase(string s) {
        
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]+=32;
            }
        }
        return s;
    }

/*
https://leetcode.com/problems/to-lower-case/
https://practice.geeksforgeeks.org/problems/java-convert-string-to-lowercase2313/1
*/
