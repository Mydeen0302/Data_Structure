#include<bits/stdc++.h>
using namespace std;

void selectionBruteForce(int a[],int size)
{
    // Implement your selection sort logic here
  
    for(int i=0;i<=size-2;i++)
    {
        int min = i;
        for(int j=i;j<=size-1;j++)
        {
if(a[j]<a[min])
{
    min = j;
}
        }
        swap(a[i],a[min]);

    }   
}

int main()
{
    int a[] = {1, 3, 4, 2, 9, 6, 8}; // Added a semicolon here
      int size=sizeof(a)/sizeof(a[0]);
    selectionBruteForce(a,size);
    for(int element : a)
    {
        cout<< " "<<element;
    }
    return 0;
}
