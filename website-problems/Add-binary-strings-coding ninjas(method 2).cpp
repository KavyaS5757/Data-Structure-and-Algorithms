#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

string addBinaryString(string &a, string &b, int n, int m) {
  // Write your code here.
  int carry = 0;
  string sum = "";

  int i=n-1, j=m-1;

  while(i>=0 || j>=0 || carry)
  {
      int digit1 = (i>=0) ? a[i--] - '0' : 0;
      int digit2 = (j>=0) ? b[j--] - '0' : 0;

      int cur_sum = digit1 + digit2 + carry;

      sum += (cur_sum % 2) + '0';
      carry = cur_sum/2;
  }

  reverse(sum.begin(), sum.end());
  return sum;


}
// https://www.codingninjas.com/studio/problem-of-the-day/easy?leftPanelTabValue=PROBLEM
