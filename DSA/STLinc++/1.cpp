#include<bits/stdc++.h>
using namespace std;


    void explainPairs(){
        pair<int ,int > p = {1,2};
        cout<<"Example for Pair:p.first=>"<<p.first<<"  p.second=>"<<p.second;
     pair<int,pair<int ,int >> m = {1,{2,3}};
        cout<<endl<<"Example for nested Pair:m.first=>"<<m.first<<"  m.second.first=>"<<m.second.first<<"  m.second.second=>"<<m.second.second;
   pair<int ,int>arr[]={{0,1},{2,3},{4,5}};
   cout<<endl<<"Example for Pair in arrays:"<<endl;
   cout<<"arr[0].first=>"<<arr[0].first<<"  arr[0].second=>  "<<arr[0].second<<endl;
     
         cout<<"arr1].first=>"<<arr[1].first<<"  arr[1].second=>  "<<arr[1].second<<endl;
            cout<<"arr[2].first=>"<<arr[2].first<<"  arr[2].second=>  "<<arr[2].second<<endl;
    }
    void explainvector(){
        vector<int>v={1,2,3,4,5}
;
for(vector<int>::iterator it = v.begin();it!=v.end();it++)   cout<<*(it)<<" ";
for(auto it = v.begin();it!=v.end();it++)   cout<<endl<<*(it)<<" ";  
for(auto it:v)   cout<<it<<" "; 
    }
int main() 

{

  //  explainPairs();
  explainvector();
    return 0;}