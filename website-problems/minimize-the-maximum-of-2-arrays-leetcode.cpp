int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        
        long long l=1, r=1e15, ans=r, d1=divisor1, d2=divisor2, cnt1=uniqueCnt1, cnt2=uniqueCnt2;
        long long g = __gcd(d1, d2), lcm = (d1*d2)/g;

        while(l<=r) //using binary search method
        {
            long long mid = (l+r)/2;
            if(d1==d2)
            {
                long long cnt = mid - (mid/d1);
                if(cnt >= cnt1+cnt2)
                {
                    ans=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }

            else
            {
                long long common = mid/lcm;
                long long c1 = (mid/d1)-common, c2 = (mid/d2)-common;
                long long z1 = cnt1, z2 = cnt2;
                long long avail = mid - (c1+c2+common);
                z1 -=min(z1, c2);
                z2 -=min(z2, c1);
                if(z1+z2 <= avail)
                {
                    ans=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
        }
        return ans;
    }

/*
https://leetcode.com/problems/minimize-the-maximum-of-two-arrays/
*/
