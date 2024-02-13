#include<bits\stdc++.h>
using namespace std;
int  printsumofn(int n){
    int count=0;
    if(n<0)
    {
        count +=n;
        printsumofn(n-1);
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<printsumofn(n);
    return 0;
}