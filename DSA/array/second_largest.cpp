#include<bits/stdc++.h>
using namespace std;
int slargest_element_BruteForce(vector<int>&arr)
{int size=arr.size();
    sort(arr.begin(),arr.end());
     int largest=arr[size-1];
    for(int i=size-1;i>=0;i--)
    {
if(arr[i]!=largest)
{
    return arr[i];
}

    }
    
}
int slargest_element_betterApproach(vector<int>&arr)
{
    int largest_element=arr[0];
    for(auto it:arr)
    {
        if(it>largest_element)
 {
    largest_element=it;
 }
    }
    int secondLargest=INT_MIN;
    for(auto it : arr)
    {
        if(it > secondLargest && it != largest_element)
        {
            secondLargest=it;
        }
    }
    return secondLargest;
}
int slargestElementOptimal(vector<int>&arr)
{
    int temp;
int largest= arr[0];
int slargest = INT_MIN;
for(auto it :arr)
{
if(it> largest)
{
    temp = largest;
    largest=it;
    slargest=temp;
}
if(it < largest && it > slargest)
{
    slargest=it;
}
}

return slargest;
}

int main()
{
    vector<int> arr={1,2,4,7,7,5};
    cout<<"using brute force approach"<<slargest_element_BruteForce(arr);
    cout<<"using better apprach"<<slargest_element_betterApproach(arr);
    cout<<"using optimal approach "<<slargestElementOptimal(arr);
    return 0;
    
}