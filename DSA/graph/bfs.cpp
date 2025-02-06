#include<bits/stdc++.h>
using namespace std;
vector<int>ComputeBfs(int start,vector<vector<int>>adjList)
{
    unordered_set<int>Visited;
    queue<int>q;
    vector<int>bfs;
    q.push(start);
    Visited.insert(start);
    while(!q.empty())
    {
        int node =q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it :adjList[node])
        {
          if(Visited.find(it) == Visited.end())
          {
            q.push(it);
            Visited.insert(it);
          }
        }
    }
    return bfs;
}
int main()
{
    vector<vector<int>> adjList = {{},{2,3},{1,4,5},{1,6,7},{2},{2},{3},{3}};
    vector<int>bfs = ComputeBfs(1,adjList);
    for(auto it:bfs)
    {
        cout<<it<<" ";
    }
}