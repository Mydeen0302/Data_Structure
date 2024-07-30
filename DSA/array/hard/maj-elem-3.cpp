#include<bits/stdc++.h>
using namespace std;
vector<int> majele1(vector<int>arr)
{
    vector<int>list;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {   
        if(list.size() == 0 || list[0] != arr[i])
        { 
        int count =0 ;
        for(int j=0;j<n;j++)
        {
            if(arr[i] ==   arr[j] )
        {
            count++;
        }
                    
        }
        if(count > (n / 3)) list.push_back(arr[i]);    
        }
    if(list.size() == 2) break;
    }
    sort(list.begin(),list.end());
    return list;
}
vector<int>majelem2(vector<int>arr)
{unordered_map<int,int>map;
int n=arr.size();
vector<int>list;
int min = int(n/3)+1;
for(int i=0;i<n;i++)
{
    map[arr[i]]++;
    if(map[arr[i]] == min)
    {
list.push_back(arr[i]);
    }
    if(list.size() == 2) break;
}
sort(list.begin(),list.end());
return list;
}

vector<int>majelem3(vector<int>nums)
{
    int n=nums.size();
    int elem1=INT_MIN;
    int elem2=INT_MIN;
    vector<int>ls;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(cnt1 ==0 && elem2!=nums[i])
        {
            elem1=nums[i];
            cnt1++;
        }
        else if(cnt2 ==0 && elem1!=nums[i])
        {
            elem2=nums[i];
            cnt2++;
        }
        else if(nums[i] ==  elem1)
        {
            cnt1++;
        }
          else if(nums[i] ==  elem2)
        {
            cnt2++;
        }
        else cnt1--,cnt2--;
    }

    int count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==elem1)
        {
        count1++;
        }
        else if(nums[i] == elem2)
        {
            count2++;
        }
    }
     int mini = int(n / 3) + 1;
    if (count1 >= mini) ls.push_back(elem1);
    if (count2 >= mini) ls.push_back(elem2);
    return ls;

}
int  main()
{
    vector<int> arr= {33,33,11,11,33,11};
   // vector<int> ans = majele1(arr);
   // vector<int>ans= majelem2(arr);

vector<int>ans= majelem3(arr);
    for(auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;

}