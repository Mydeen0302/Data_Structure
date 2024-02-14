#include <bits/stdc++.h>
using namespace std;
bool checkpalindromme(int i, string &s)
{
    if(i>s.size()/2){
        return true;
    }
    else{
        if(s[i]!= s[s.size()-i-1]){
            return false;
        
        }
        else{
               return checkpalindromme(i+1,s);
        }

    }

}
int fibbonacciOfN(int n)
{
    if(n<=1)
    {
    return n;
    }
    else{
        return fibbonacciOfN(n-1)+fibbonacciOfN(n-2);
    }
}
int main() {
  string s="mm";

  cout<<boolalpha<<checkpalindromme(0,s);

  int n;

  cin>>n;
  cout<<fibbonacciOfN(n);
    return 0;
}
