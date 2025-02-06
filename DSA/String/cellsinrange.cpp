#include<bits/stdc++.h>
using namespace std;
vector<string> findcellsinrange(string s)
{ vector<string>res;
    char colStart = s[0];
    char colEnd = s[3];
    int rowStart = s[1] - '0';
    int rowEnd = s[4] - '0';
    for(int i=colStart;i<=colEnd;i++)
    {
        for(int j=rowStart;j<=rowEnd;j++)
        {
            string cell=string(1,i)+ to_string(j);
            res.push_back(cell);
        }
    }
    return res;
}
int main()
{
    string s= "A1:F1";
    vector<string> ans = findcellsinrange(s);
    for(auto it:ans)cout<<it;
    return 0;
}