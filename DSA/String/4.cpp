#include <iostream>
using namespace std;

int main() {
    string s= "((()))((()))";
    int maxi = INT8_MIN;
    int cnt =0;
    for(auto it :s)
    {
if(it == '(') cnt++;
else if(it == ')')cnt--;
maxi = max(maxi,cnt);
    }
    cout<<maxi;
    return 0;
}
