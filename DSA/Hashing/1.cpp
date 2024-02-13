#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"Enter the size of the array:"<<endl;
   cin>>n;
   int a[n];
   cout<<"Enter the Elements of the array:"<<endl;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   
//now we have to make pre calculation and make a hashn array 
int hash[13]={0};
for(int i=0;i<n;i++)
{
    //this make increment the hash array from the element in the orignal array 
    hash[a[i]] +=1;
}
int q;
cout<<"Enter how many element you want to search"<<endl;
cin>>q;
while(q--){
    int number ;
    cout<<"Enter the  number you want to search"<<endl;
    cin>>number;

    cout<<"it occurs "<<hash[number]<<" times"<<endl;
}

    return 0;
}