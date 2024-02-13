#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="ababsdkdhfj";
    int hash[26]={0};
   //precalculation
   
    for(int i=0;i<=s.size();i++){
hash[s[i]-'a']++;
    }
    int q;
    cout<<"Enter how many letter you want to count"<<endl;
    cin>>q;
    while(q--)
{
    char input;
    cout<<"enter the charecter"<<endl;
    cin>>input;
    cout<<hash[input - 'a']<<endl;


}    return  0;
}