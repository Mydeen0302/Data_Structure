#include<bits/stdc++.h>
using namespace std;
int getSEbrute(vector<int>arr)
{
    int n=arr.size();
    int cnt;
    for(int i=0;i<n;i++)
    {
        cnt=0;
        int  num=arr[i];

        for(int j=0;j<n;j++)
        {
            if(arr[j] == num)
            {
cnt++;
            }
        }
        if(cnt ==1)
        {
            return arr[i];
        }
    }
}
int getSEBetter(const std::vector<int>& arr) {
    map<int, int> mpp;
    for (auto it : arr) {
        mpp[it]++;
    }
    for (auto it : mpp) {
        if (it.second < 2) {
            return it.first;
        }
    }
 
}
int getSEopt(vector<int>arr)
{
 int res=0;
for(auto it: arr)
{
    res=res^it;
}
return res;
}

int main()
{
    vector<int> arr={1,1,2,2,3,3,4,4,5};
  //int res =  getSEbrute(arr);
  //int res= getSEBetter(arr);
  int res=getSEopt(arr);
  cout<<res<<endl;
    return 0;
}