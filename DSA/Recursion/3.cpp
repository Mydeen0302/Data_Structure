#include<bits\stdc++.h>
using namespace std;
void sumOfN(int n,int sum){
if(n<1){
    cout<<"Using Parametrized way: "<<sum<<endl;
    return;
}
else{
    sumOfN(n-1,sum+n);
}
}
long long sumFirstN2
(long long n) {
    // Write your code here. 
    if(n==0){return 0;}
    else{
       return n+sumFirstN2(n-1);
    }
}
int factorialofN(int n)
{
    if(n==0)
    {return 1;}
    else{
        return n*factorialofN(n-1);
    }
}
int main(){
    int n;
    cin>>n;
   //parameterized way
    sumOfN(n,0);
    //functional way
    cout<<"functional way: "<<sumFirstN2(n)<<endl;

   cout<<"Factorial of N: "<<factorialofN(n);
    return 0;
}