#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> nums) {
    set<vector<int>> st;
    int n=nums.size();
    for (int i = 0; i < n; i++) {
        set<int> hashset;
        for (int j = i + 1; j < n; j++) {
            //Calculate the 3rd element:
            int third = -(nums[i] + nums[j]);

            //Find the element in the set:
            if (hashset.find(third) != hashset.end()) {
                vector<int> temp = {nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }

    //store the set in the answer:
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
   
    }
vector<vector<int>> sum(vector<int>arr)
{ int n=arr.size();
set<vector<int>> set;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
if(arr[i]+arr[j]+arr[k] == 0 )
{
    vector<int>temp = {arr[i],arr[j],arr[k]};
    sort(temp.begin(),temp.end());
    if(set.empty()||set.find(temp) == set.end())
    {
        set.insert(temp);
    }
}
        }
    }
}
    vector<vector<int>>ans(set.begin(),set.end());
    return ans;
}
int main()
{    vector<int> arr={-1,0,1,2,-1,-4};
//vector<vector<int>>ans = sum(arr);
vector<vector<int>>ans = threeSum(arr);
for(auto it:ans)
{ cout<<endl;
    for(auto num:it)
    {
        cout<<num<<" ";
    }
}
    return 0;
}