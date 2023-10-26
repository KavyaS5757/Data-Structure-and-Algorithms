#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a("1 2 3");
    istringstream my_stream(a);
    int n;
    while(my_stream)
    {
        my_stream>>n;
        if(my_stream)
        {
            cout<<"The stream is successful: "<<n<<"\n";
        }
        else
        {
            cout<<"That stream was unsuccessful"<<"\n";
        }
    }
    return 0;
}

/*
The stream is successful: 1
The stream is successful: 2
The stream is successful: 3
That stream was unsuccessful
*/

int main()
{
    string str("1, 2, 3");
    istringstream my_stream(str);
    char c;
    int n;

    while(my_stream >> n >> c)
    {
        cout<<"That stream was successful "<<n<<" "<<c<<"\n";
    }
    cout<<"That stream is failed"<<"\n";
    return 0;
}

/*
That stream was successful 1 ,
That stream was successful 2 ,
That stream is failed
*/

int main()
{
    string str("abc, def, ghi");
    istringstream my_stream(str);
    string token;
    size_t pos = -1;
    while(my_stream >> token)
    {
        while ((pos = token.rfind(',')) != string::npos)
        {
            token.erase(pos, 1);
        }
        cout<<token<<"\n";   
    }
    return 0;
}

/*
abc
def
ghi
*/
