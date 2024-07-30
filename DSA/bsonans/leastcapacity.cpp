
#include<bits/stdc++.h>
using namespace std;
int calculatecap(int mid,vector<int>weight)
{
    int days=1,total=0;
    for(int i=0;i<weight.size();i++)
    {
        if(total+weight[i] > mid)
        {
            days+=1;
            total=weight[i];
        }
        else{
            total+=weight[i];
        }
    }
    return days;
}
int  leastcap(vector<int>weight,int days)
{int low=*max_element(weight.begin(), weight.end());
 int high = accumulate(weight.begin(), weight.end(), 0);
    while(low<=high)
    {int mid=(low+high)/2;
    int num=calculatecap(mid,weight) ;
        if(num<= days)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main()
{
    vector<int>weight ={5,4,5,2,3,4,5,6};
    int days=5;
    int cap=leastcap(weight,days);
    cout<<cap;
    return 0;
}