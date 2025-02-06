#include<bits/stdc++.h>
using namespace std;
int find(vector<int>arr)
{   int low =0,high = arr.size()-1;
  int minele = INT_MAX;
  while(low <= high)
  {
      int mid = (low + high)/2;
      if(arr[low] <= arr[mid]) // left half is sorted
      {   
           minele = min(minele,arr[low]);  //take the minimum element 
           cout<<"left half taking min"<<minele<<endl;
           low = mid+1;
      }
      else{ // right half is sorted
           
            minele = min(minele,arr[mid]); //take the minimum element
            cout<<"right half taking"<<minele<<endl;
            high = mid-1;
      }
  }
    return minele;
}
int main()
{      vector<int>arr={7,8,9,1,2,3,4,5,6};
       cout<<find(arr);
    return 0;
}