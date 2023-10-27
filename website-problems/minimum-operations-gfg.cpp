int minOperation(int n)
    {
        //code here.
        int ans=0;
        while(n!=0)
        {
            if(n%2 == 0)
            {
                n=n/2;
                ans++;
            }
            else
            {
                n--;
                ans++;
            }
        }
        return ans;
    }

/*
https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1
*/
