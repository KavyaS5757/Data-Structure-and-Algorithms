int commonFactors(int a, int b) {
        int ans = 1;
        const int gcd = __gcd(a, b);
        for(int i=2; i<=gcd; ++i)
        {
            if(a%i == 0 && b%i == 0)
            {
                ans++;
            }
        }
        return ans;
    }

/*
https://leetcode.com/problems/number-of-common-factors/description/
*/
