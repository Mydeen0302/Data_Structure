    #include<iostream>
    #include<stdio.h>
    #include<vector>
    using namespace std;
    int findlowerbound(vector<int>&arr,int &k)
    {
        int low=0,high=arr.size()-1;
        int resultindex=-1;
        while(low<= high)
        {
            int mid=(low+high)/2;
            if (arr[mid] >= k)
            {   
            if (arr[mid] == k) resultindex = mid;
            high = mid - 1; 
            }
        else
        {
            low = mid + 1;
        }
        }
        return resultindex;
    }
    int count(vector<int>&arr,int& k)
    {
        int lbindex=findlowerbound(arr,k);
        int count=0;
            while(lbindex < arr.size() &&   arr[lbindex] == k)
            {
                count++;
                lbindex++;
            }
        return count;    
    }
    int main()
    {
        vector<int>arr={2, 2 , 3 , 3 , 3 , 3 , 4};
        int k=2;
        cout<<count(arr,k);
        return 0;
    }