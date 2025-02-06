#include<bits/stdc++.h>
using namespace std;
//swap
/*int main()
{
    int a=4;
    int b=5;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"a :"<<a<<" b :"<<b;

    return 0;
}*/
//check if ith bit is set-->(1) or not 
/*
eg:70-> 1 0 0 0 1 1 0
check if 3rd bit is set or not 
usinbg left shift operator
int main()
{   int a=70;
    int i=3;
    int b= 1 << i-1;
    if((a&b) != 0) cout<<"is set";
    else cout<<"not"; 
    return 0;
}
*/
// set th ith bit
/*int main()
{ 
    int a=11;
    int i=3;
    int res=1<<i-1;
    int ans=a|res;
    cout<<ans;
    return 0; 
}*/
//clear the ith bit
/*int main()
{
    int a=70;
    int i=3;
    int b = ~(1<< i-1);
    int ans = a & b;
    cout<<ans;
    return 0;

}
*/
//get the ith bit
/*int main()
{
    int a =70;
    int i=4;
    int c= a>>i-1;
    int ans=c&1;
    cout<<ans;
    return 0;

}*/
//toggle the ith bit
/*int main()
{ int a=70;
  int i=2;
  int ans= a^(1<< i-1);
  cout<<ans;
    return 0;
}*/
//remove the last set bit
/*int main()
{
    int a=70;
    int ans=a&(a-1);
    cout<<ans;
    return 0;
}*/