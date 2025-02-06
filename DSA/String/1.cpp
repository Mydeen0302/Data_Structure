#include<bits/stdc++.h>
using namespace std;
string convert(string s)
{
    string res="";
    char prev=s[0];
    int count=1;
    int i=1;
    while(i< s.size())
    {
        if(s[i] == prev)
        {
            count++;
            prev=s[i];
        }
        else{
            prev=s[i];
            res+=to_string(count);
            count =1;
        }
        i++;
    }
    res+=to_string(count);
    return res;
}
int main()
{
    string s= "**%%**%%";
    string ans= convert(s);
    cout<<ans;
    return 0;
}