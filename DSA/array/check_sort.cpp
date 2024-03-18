#include<bits/stdc++.h>
using namespace std;
 bool check_sort(vector<int>arr){
    for(int i=1;i<arr.size()-1;i++)
    {
        if(arr[i]>arr[i-1])
        {

        }
        else{
            return false;
        }
    }
    return true;
    }

int main()
{
      vector<int> arr={1,4,5,9,10,};
   if(check_sort(arr) == 1)
   {
    cout<<"sorted";
   }
   else{
    cout<<"not sorted";
   }
    
    return 0;
}