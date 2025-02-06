#include<bits/stdc++.h>
using namespace std;
string convert(string s)
{
stack<string>st;
int i=0,n=s.size();
while(i<n)
{
     if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
     {
            st.push(string(1, s[i]));
     }
     else{
        string ele1= st.top();
        st.pop();
        string ele2= st.top();
        st.pop();
      string expr = "(" + ele2 + s[i] + ele1 + ")";
            
            // Push the new expression back onto the stack
            st.push(expr);
     }
     i++;
}
return st.top();
}
int main()
{   string s="AB-DE+F*/";
   cout<<convert(s);
    return 0;
}