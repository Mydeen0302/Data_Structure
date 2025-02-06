#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
vector<int> computelps(string pattern)
{
   vector<int> lps(pattern.size(), 0);
  int len=0, i=1,m=pattern.size();
   lps[0]=0;
   while(i< m)
   {
       if(pattern[i] == pattern[len])
       {
           lps[i] = len+1;
           len++;
           i++;
       }
       else  
       {
          if(len !=0)
          {
            len = lps[len-1];

          }
          else 
          { lps[i] = len;
            i++;
          }
       }
   }
   return lps;
}
int computekmp(string pattern, string sstring)
{
    vector<int>lps =computelps(pattern);
    int i=0,j=0;
    int n=sstring.size();
    int m=pattern.size();
    while(i<n)
    {
        if(sstring[i] == pattern[j])
        {
            i++;
            j++;
        }
        if(j==m){return i-1;}
        else if (i < n && sstring[i] != pattern[j]){
            if(j!=0)
            {
                 j = lps[j-1];
            }
            else
            {
                i++;
            }
        }
    }
 return -1;
}
int main()
{
    string pattern="ababd";
    string sstring="ababcabcabababd";
     int index = computekmp(pattern,sstring);    
     int ans = index- (pattern.size()-1);
     cout<<ans;
    return 0;
}