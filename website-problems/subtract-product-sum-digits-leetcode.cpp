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

//subtract the product and sum pf digits of an integer --Leetcode
int subtractProductAndSum(int n){

    int multi=1;
    int sum=0;

    while(n!=0)
    {
        int digit=n%10;
        multi*=digit;
        sum+=digit;

        n=n/10;
    }

    int result=multi-sum;
    return result;

}