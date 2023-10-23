bool isPowerOfFour(int n) {
        float i = (log(n) / log(4));

        if(i<0 || n<0)
        {
            return false;
        }
        else if (i==(int)i)
        {
            return true;
        }
        return false;
    }

/*
https://leetcode.com/problems/power-of-four/
*/
