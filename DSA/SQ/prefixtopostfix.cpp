#include<bits/stdc++.h>
using namespace std;
string convert(string s)
{
int i=s.size()-1;
stack<string>st;
while(i>=0)
{
   if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
            st.push(string(1,s[i]));
   }
   else{
      string ele1= st.top();
                  st.pop();
                 string ele2= st.top();
                 st.pop();
                 string expr =ele1 +ele2+s[i];
                 st.push(expr);
   }
i--;
}   
return st.top();
}
int main()
{   cout<<convert("/-ab*+DEF");
    return 0;
}