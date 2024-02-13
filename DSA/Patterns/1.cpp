#include<iostream>
using namespace std;
void print1(int x){for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){

cout<<"* ";
}

cout<<endl;
}}

void pattern2(int n){for(int i=0;i<n;i++){

    for(int j=0;j<=i;j++){cout<<"* ";}
    cout<<endl;
}}

void pattern3(int n){for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){cout<<j<<" ";}
    cout<<endl;
}}
void pattern4(int n){for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){cout<<i<<" ";}
    cout<<endl;
}}
void pattern5(int n){for(int i=0;i<n;i++){
int count=0;
    for(int j=n;j>i;j--){
        count++;
        cout<<count<<" ";}
    cout<<endl;
}}

void pattern6(int n){for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i+1;j++){cout<<"* ";}
    cout<<endl;
}
}
void pattern7(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){cout<<" ";}
        for(int k=0;k<2*i+1;k++){cout<<"*";}
        for(int m=0;m<n-i-1;m++){cout<<" ";}
     cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){int n;
cout<<"enter:"<<endl;
cin>>n;
    print1(n);
    cout<<endl;
    pattern2(n);
    
    cout<<endl;
    pattern3(n);
    cout<<endl;
    pattern4(n);
    cout<<endl;
    pattern6(n);
    cout<<endl;
    pattern5(n);
    cout<<endl;
    
    pattern7(n);
    cout<<endl;}

return 0;}