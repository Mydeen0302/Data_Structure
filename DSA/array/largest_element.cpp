#include<bits/stdc++.h>
using namespace std;
int largest_element_BruteForce(vector<int>&arr)
{
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
int largest_element_optimalApproach(vector<int>&arr)
{
    int largest_element=arr[0];
    for(auto it:arr)
    {
        if(it>largest_element)
 {
    largest_element=it;
 }
    }
    return largest_element;
}

int main()
{
    vector<int> arr={1,4,6,5,9,10,3,2};
    cout<<"using brute force approach"<<largest_element_BruteForce(arr);
    cout<<"using optimal apprach"<<largest_element_optimalApproach(arr);
    return 0;
    
}