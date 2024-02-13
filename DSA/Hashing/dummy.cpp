#include<bits\stdc++.h>

using namespace std;


vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int,int>mpp;
    for(int i=0;i<v.size();i++)
    {
mpp[v[i]]++;  //map<a[i], val++> 
    }
    int  min =INT_MAX;
    int max=INT_MIN;

    int min_ele,max_ele;
    for(auto it:mpp)
    {
       if(it.second>max)
       {
        max=it.second;
        max_ele=it.first;
       } 
         if(it.second<min)
       {
        min=it.second;
        min_ele=it.first;
       } 
    }

    return {max_ele, min_ele};
}

int main() {
    int n = 6;
    vector<int> v = {12,13,14};

    vector<int> result = getFrequencies(v);

    cout << "Output: " << result[0] << " " << result[1] << endl;

    return 0;
}
