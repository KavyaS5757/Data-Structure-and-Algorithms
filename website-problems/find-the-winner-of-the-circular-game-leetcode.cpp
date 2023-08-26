#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include<map>
#include <set>
#include <unordered_map>
#include<algorithm>

using namespace std;

int Solve(int n,int k) //-- c code
{
    if(n==1)
    return 0;
    return ((Solve(n-1,k)+k)%n);
}

int findTheWinner(int n, int k){
    int ans=Solve(n,k)+1;
    return ans;
}

class Solution {  //--c++ code
public:
    int Solve(int n,int k)
    {
        if(n==1)
        return 0;
        return ((Solve(n-1,k)+k)%n);
    }
    int findTheWinner(int n, int k) {
        int ans=Solve(n,k)+1;
        return ans;
    }
};