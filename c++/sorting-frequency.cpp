#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include<map>
#include <unordered_map>
#include<algorithm>
using namespace std;

 /*
 #include <stdio.h>
    void main()     //sorting elements of arrays in ascending order
    {
 
        int i, j, a, n;
        printf("Enter the value of N \n");
        scanf("%d", &n);
        int number[n];
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
    */

bool fcompare( pair<int, pair<int,int>>p, pair<int, pair<int,int>>p1)
{
    if(p.second.second != p1.second.second)
    return (p.second.second>p1.second.second);
    else
    return (p.second.second<p1.second.second);
}
/*

The fcompare function is a comparison function used for sorting elements. 
It takes two pairs as input: p and p1. These pairs are of the form (value, (frequency, index)), where the value represents the element from the original array, frequency represents the frequency of that element, and index represents the original index of that element.
The function compares the two pairs based on their frequencies and indices in the following way:
->First, it compares the frequencies (p.second.second and p1.second.second) of the pairs. 
  If the frequencies are not equal, the pair with the higher frequency should come first in the sorted order. 
  Therefore, if p.second.second is greater than p1.second.second, it means p should come before p1, so the function returns true. 
  Otherwise, it proceeds to the next step.
->If the frequencies are equal, it means that the pairs have the same frequency. 
  In this case, the function compares the indices (p.second.first and p1.second.first) of the pairs. 
  The pair with the smaller index should come first in the sorted order. 
  So, if p.second.first is less than p1.second.first, it means p should come before p1, and the function returns true.
->If both the frequencies and indices are equal, it means the pairs are equal, and the function returns false.

In summary, the fcompare function compares two pairs based on their frequencies and indices and returns true if the first pair should come before the second pair in the sorted order. 
It is used as the comparison function when sorting elements.

*/

void SortByFrequency(int arr[],int n)
{
    unordered_map<int, pair<int, int> > hash;  //using hash map
    /*
    The line unordered_map<int, pair<int, int> > hash; declares a variable named hash of type unordered_map<int, pair<int, int>>.
    unordered_map is a container in C++ STL (Standard Template Library) that stores elements in key-value pairs. 
    In this case, the key is an integer (int), and the value is a pair of integers (pair<int, int>).
    So, unordered_map<int, pair<int, int> > hash; creates an empty hash map where keys are integers, and values are pairs of integers. 
    This hash map will be used to store the frequency and original index of each element in the input array.
    */
    for(int i=0;i<n;i++)
    {
        if(hash.find(arr[i])!=hash.end())
        hash[arr[i]].second++;
        else
        hash[arr[i]]=make_pair(i,1);
    }
    /*
    The loop iterates over each element of the input array arr.
    For each element arr[i], it checks if the element already exists as a key in the hash map by using hash.find(arr[i]).
    If hash.find(arr[i]) does not return hash.end(), it means the element exists in the hash map. 
    In that case, it increments the frequency of the element by accessing hash[arr[i]].second and incrementing it using the ++ operator.
    If hash.find(arr[i]) returns hash.end(), it means the element does not exist in the hash map. 
    In that case, it creates a new key-value pair in the hash map with the element as the key. 
    The value is created using make_pair(i, 1), which sets the original index (i) as the first element of the pair and initializes the frequency as 1.
    In summary, this code block updates the frequency and original index of each element in the hash map based on its occurrence in the input array. 
    If the element already exists, it increments the frequency, and if it's a new element, it adds a new key-value pair to the hash map.

    In the line hash[arr[i]].second++, hash[arr[i]] retrieves the value (pair of integers) associated with the key arr[i] from the hash map hash.
    Since the value is a pair of integers (pair<int, int>), .second is used to access the second element of the pair, which represents the frequency of the element.
    Then, ++ is used to increment the frequency by one. It is equivalent to hash[arr[i]].second = hash[arr[i]].second + 1; or hash[arr[i]].second += 1;.
    In summary, hash[arr[i]].second++ increments the frequency of the element arr[i] stored in the hash map by accessing the second element of the pair and incrementing it by one.

    */

   auto it = hash.begin();
   /* Reason for declaring it as 'auto'
   In the line auto it = hash.begin();, the auto keyword is used to automatically deduce the type of the variable it based on the initializer expression hash.begin().
   The type of it is an iterator type that is specific to the unordered_map container. 
   Since the exact type of the iterator can be quite complex and lengthy to write out explicitly, using auto allows the compiler to determine the appropriate iterator type automatically based on the container type.
   By using auto, you don't need to explicitly specify the iterator type, which can save you from potential errors or maintenance issues if the container type changes in the future. 
   It improves code readability and reduces verbosity.
   In this case, hash.begin() returns an iterator pointing to the beginning of the hash map, and auto automatically deduces the type of that iterator, so you don't have to specify it explicitly.
   */

   /*
    auto it = hash.begin(); initializes an iterator it to the beginning of the hash map, which is then used to iterate over the elements of the hash map and perform further operations on them.

    The purpose of the iterator 'it' is to iterate over the key-value pairs in the hash map. 
    It starts at the beginning of the map (hash.begin()) and goes until the end of the map (hash.end()).
    The for loop uses this iterator to iterate over each key-value pair in the hash map. 
    For each pair, it creates a new pair (make_pair(it->first, it->second)) and pushes it into the vector b. 
    The resulting vector b contains the elements of the hash map in the same order as they appear in the hash map.
    In summary, auto it = hash.begin(); initializes an iterator it to the beginning of the hash map, which is then used to iterate over the elements of the hash map and perform further operations on them.
   */

  vector<pair<int, pair<int ,int>>>b;   //to store the final sorted order
  for(it;it!=hash.end();++it)
  {
    b.push_back(make_pair(it->first,it->second));
  }

  sort(b.begin(),b.end(),fcompare);

  for(int i=0;i<b.size();i++)
  {
    int count=b[i].second.second;
    while(count--)
    {
        cout<<b[i].first<<" ";
    }
  }
  /*
  
  The loop iterates over the elements of the vector b. 
  Each element of b is a pair where the first element represents the value from the original array, and the second element is another pair that contains the frequency and index information.
  To understand b[i].second.second, let's break it down step by step:
  ->b[i] retrieves the i-th element from the vector b, which is a pair of the form (value, (frequency, index)).
  ->b[i].second retrieves the second element of the pair (frequency, index), which is itself a pair.
  ->b[i].second.second retrieves the second element of the pair (frequency, index), which represents the frequency.
  ->Therefore, b[i].second.second gives us the frequency of the value b[i].first from the original array.
  The subsequent while loop then prints the value b[i].first (the element from the original array) count number of times. 
  It decrements count with each iteration until it becomes zero, printing the value repeatedly.
  In summary, b[i].second.second is used to access the frequency of the value in the original array, and the subsequent loop prints the value that many times.

  ? Then the same declaration happened when we declared unordered_map, there we didn't used second.second why?
  ChatGPT
  You're correct, in the earlier part of the code when declaring and populating the hash unordered_map, the expression hash[arr[i]].second++ is used to access and increment the frequency of the elements. 
  In that case, only second is used to access the frequency because the value associated with each key in the hash map is a pair of integers.
  The difference arises from the structure of the data stored in the hash map and the b vector. In the hash map, the value type is pair<int, int>, where the first element represents the original index, and the second element represents the frequency. 
  Hence, we directly access the frequency using second.
  On the other hand, when copying the key-value pairs from the hash map to the b vector, the value type becomes pair<int, pair<int, int>>, where the second element of the pair is again a pair containing the frequency and index. 
  Therefore, when accessing the frequency from the b vector, we need to use second.second to reach the frequency information.
  To summarize, the difference in accessing second versus second.second is due to the structure of the data stored in the hash map and the b vector. In the hash map, the frequency is directly accessed with second, while in the b vector, the frequency is accessed with second.second due to the nested pair structure.

  */

}

int main()
{
    int arr[]={1,4,5,5,2,4,8,4,4,4,-1,999999};
    int n= sizeof(arr)/sizeof(arr[0]);

    //calling the function
    SortByFrequency(arr,n);

    return 0;
}


/*
    References:-
    https://www.sanfoundry.com/c-program-sort-array-ascending-order/
    https://www.geeksforgeeks.org/sort-elements-by-frequency/
*/