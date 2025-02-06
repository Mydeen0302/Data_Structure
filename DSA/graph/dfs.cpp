#include<bits/stdc++.h>
using namespace std;
vector<int>ComputeDfs(int start,vector<vector<int>>&adjList,unordered_set<int>&Visited,vector<int>&dfs)
{
    Visited.insert(start);
    dfs.push_back(start);
    for(auto it:adjList[start])
    {
        if(Visited.find(it) == Visited.end())
        {
            ComputeDfs(it,adjList,Visited,dfs);
        }
    }
}
int main()
{
    vector<vector<int>> adjList = {{},{2,3},{1,4,5},{1,6,7},{2},{2},{3},{3}};
    unordered_set<int>Visited;
    vector<int>dfs;
     ComputeDfs(1,adjList,Visited,dfs);
    for(auto it:dfs)
    {
        cout<<it;
    }
    return 0;
}