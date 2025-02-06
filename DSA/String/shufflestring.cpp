#include<bits/stdc++.h>
using namespace std;

  string shuffle(string &s, vector<int> &indices) {
    string shuffled(s.size(), ' ');  // Create a string with the same size as s, filled with spaces

    // Place each character in its correct position according to the indices
    for (int i = 0; i < s.size(); ++i) {
        shuffled[indices[i]] = s[i];
    }

    return shuffled;
}

int main()
{  string s = "codeleet";
   vector<int>indeces = {4,5,6,7,0,2,1,3};
   string ans  =shuffle(s,indeces);
   cout<<ans;
    return 0;
}