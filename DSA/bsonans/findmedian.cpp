#include<bits/stdc++.h>
using namespace std;
double findmedian(vector<int>arr1,vector<int>arr2)
{
    int n1=arr1.size(),n2=arr2.size();
    int i=0,j=0;
    vector<int>arr3;
    while(i<n1 && j<n2)
    {
        if(arr1[i]<arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else{
              arr3.push_back(arr2[i]);
            j++;
        }
    }
    while(i<n1)
    {arr3.push_back(arr1[i]);
    i++;
    }
     while(j<n2)
    {arr3.push_back(arr2[j]);
    j++;
    }
   int n = n1 + n2;
    if (n % 2 == 1) {
        return (double)arr3[n / 2];
    }

    double median = ((double)arr3[n / 2] + (double)arr3[(n / 2) - 1]) / 2.0;
    return median;   
}
double findmedianbetter(vector<int>arr1,vector<int>arr2)
{
    int n1=arr1.size(),n2=arr2.size();
    int count =0;
    int i=0,j=0;
    int iele1= (n1+n2)/2;
    int iele2=iele1-1;
    int ele1=-1,ele2=-1;
 while(i<n1 && j<n2)
    {    if(arr1[i]<arr2[j])
        {  if(iele1 == count){ele1=arr1[i];}
        if(iele2 == count){ele2=arr1[i];}
            i++;
           count++;
              }
        else{
             if(iele1 == count){ele1=arr2[i];}
        if(iele2 == count){ele2=arr2[i];}
            j++;
            count++;
        }
    }
    while(i<n1){ if(iele1 == count){ele1=arr1[i];}
        if(iele2 == count){ele2=arr1[i];}
            i++;
           count++;}
           while(j<n2)
           {   if(iele1 == count){ele1=arr2[i];}
        if(iele2 == count){ele2=arr2[i];}
            j++;
            count++;

           }
           if((n1+n2)%2 == 1){return iele1;}
            return double((double)(ele1+ele2)/2.0);
}
int main()
{ 
    vector<int>arr1={2,4,6};
    vector<int>arr2={1,3};
    //double ans= findmedian(arr1,arr2);
    double  ans= findmedianbetter(arr1,arr2);
    cout<<ans;
    return 0;
}