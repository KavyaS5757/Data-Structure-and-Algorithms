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
#include <iomanip>
using namespace std;

//XOR operation in an array --Leetcode
class Solution {
public:
    int xorOperation(int n, int start) {
      int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i] = start + 2*i;
        }

        int ans  = 0;

        for(int i=0;i<n;i++)
        {
            ans = ans ^ arr[i];
        }

        return ans;
    }
};