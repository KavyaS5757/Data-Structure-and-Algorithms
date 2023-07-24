/*
    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
*/

class Solution {
public: 
    int maxProfit(vector<int>& prices) {
        
        int op=0;  //overall profit
        int pist=0;  //profit if sold today
        int lsf = INT_MAX;   //least so far

        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<lsf)   //if we found new buy value which is more smaller than previous value
            {
                lsf=prices[i];      //updating the least
            }

            pist=prices[i]-lsf;     //calculating profit if sold today
            if(op<pist)             //if pist is more than our previous overall
            op=pist;               //updating overall profit
        }
        return op;
    }
};
