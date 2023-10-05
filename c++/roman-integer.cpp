class Solution {
  public:
    
    int value(char K)
    {
        if(K=='I')
        return 1;
        if(K== 'V')
        return 5;
        if(K== 'X')
        return 10;
        if(K== 'L')
        return 50;
        if(K== 'C')
        return 100;
        if(K== 'D')
        return 500;
        if(K== 'M')
        return 1000;
        return -1;
    }
    int romanToDecimal(string &str) {
       int result=0;
       
       for(int i=0;i<str.length();i++)
       {
           int s1 = value(str[i]);
           if((i+1) < str.length())
           {
               int s2 = value(str[i+1]);
               if(s1>=s2)
               {
                   result += s1;
               }
               else
               {
                  result = result + (s2-s1);
                  i++;
               }
           }
           else
           {
               result = result + s1;
           }
       }
       
       return result;
       
    }
};

https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
