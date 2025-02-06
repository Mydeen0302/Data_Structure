#include<bits/stdc++.h>
using namespace std;
string convert(string s)
{
int i=0,n=s.size();
stack<string>st;
while(i<n)
{
   if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
            st.push(string(1,s[i]));
   }
   else{
      string ele1= st.top();
                  st.pop();
                 string ele2= st.top();
                 st.pop();
                 string expr = s[i] + ele2 +ele1;
                 st.push(expr);
   }
    i++;
}
return st.top();
}
int main()
{   cout<<convert("AB-DE+F*/");
    return 0;
}