#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    size_t position = str.find("abc");
    if(position == string::npos)
    {
        cout<<"substring not found";
    }
    else
    {
        cout<<position;
    }
    return 0;
}

/*
substring not found
*/

void fun(string s1, string s2)
{
    int found = s1.find(s2);
    if(found != string::npos)
    {
        cout<<"first "<<s2<<" found at: "<<(found)<<endl;
    }
    else
    {
        cout<<s2<<" is not in the string"<<endl;
    }
}

int main()
{
    string s1 = "geeksforgeeks";
    string s2 = "for";
    string s3 = "no";
    fun(s1, s2);
    return 0;
}

/*
first for found at: 5
*/
