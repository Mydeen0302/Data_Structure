
#include<iostream>
using namespace std;
/*void pattern7(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){cout<<" ";}
        for(int k=0;k<2*i+1;k++){cout<<"*";}
        for(int m=0;m<n-i-1;m++){cout<<" ";}
     cout<<endl;
    }
}
void pattern9(int n){

    for(int i=0;i<n/2;i++){
        for(int j=0;j<(n/2)-i-1;j++){cout<<" ";}
        for(int k=0;k<2*i+1;k++){cout<<"*";}
        for(int m=0;m<(n/2)-i-1;m++){cout<<" ";}
     cout<<endl;
    }
     for(int i=0;i<n/2;i++){
        for(int j=0;j<i;j++){cout<<" ";}
        for(int k=0;k<2*(n/2)-(2*i+1);k++){cout<<"*";}
        for(int m=0;m<i;m++){cout<<" ";}
     cout<<endl;
    }
}
void pattern8(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){cout<<" ";}
        for(int k=0;k<2*n-(2*i+1);k++){cout<<"*";}
        for(int m=0;m<i;m++){cout<<" ";}
     cout<<endl;
    }
}*/
/*void pattern10(int n){
    for(int i=1;i<=(2*n)-1;i++){
       int stars=i;
       if(i>n){stars=2*n-i;}
        for(int j=1;j<=stars;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern11(int n){
    int start;
    for(int i=0;i<n;i++){
    if(i%2==0){start=1;}
    else start=0;
    for(int j=0;j<=i;j++){
cout<<start<<" ";
start =1-start;
}
cout<<endl;

}

}

void pattern12(int n){int space=2*(n-1);for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){cout<<j;}

for(int j=1;j<=space;j++){cout<<" ";}
for(int j=i;j>=1;j--){cout<<j ;}
cout<<endl;
space-=2;

}}


void pattern13(int n){
    int start=0;
    for(int i=0;i<n;i++){

  
    for(int j=0;j<=i;j++){
        start++;
        cout<<start<<" ";
}
cout<<endl;

}

}

void pattern14(int n){

    for(int i=0;i<n;i++){

  
    for(char j='A';j<='A'+i;j++){
        cout<<j<<" ";
}
cout<<endl;

}

}*/
/*void pattern15(int n){
    
    for(int i=0;i<n;i++){
for(char ch='A';ch<='A'+n-i-1;ch++){
    cout<<ch<<" ";
}
cout<<endl;
    }

    }
    
void pattern16(int n){
char print='A';
    for(int i=0;i<n;i++){

  
    for(char j='A';j<='A'+i;j++){
        cout<<print<<" ";
       
}
cout<<endl;
 print++;
}

}
   void pattern17(int n){

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){cout<<" ";}
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int k=1;k<=2*i+1;k++){if(k<=breakpoint){cout<<ch++;}
        else{
            cout<<ch--;
        }
        }
        for(int m=0;m<n-i-1;m++){cout<<" ";}
     cout<<endl;
    }
}*/

 /*void pattern18(int n){

    for(int i=0;i<n;i++){

  
    for(char j='E'-i;j<='E';j++){
        cout<<j<<" ";
}
cout<<endl;

}}*/   
int main(){
  //  int t;
    //cin>>t;
    int n;
    cout<<"enter:"<<endl;
cin>>n;


  
    
   /* pattern7(n);
    cout<<endl;

    pattern8(n);
    cout<<endl;
    
     pattern9(n);
    cout<<endl;*/
   /*pattern10(n);
    cout<<endl;
    pattern11(n);
    cout<<endl;
     pattern12(n);
    cout<<endl;
       pattern13(n);
    cout<<endl;
pattern14(n);
    cout<<endl;
*/ /*pattern15(n);
cout<<endl;
pattern16(n);
cout<<endl;
pattern17(n);
cout<<endl;*//*pattern18(n);
cout<<endl;*/

  /*for(int i=1;i<=(2*n)-1;i++){
int stars=i;
if(stars>n){stars=2*n-i;}
        for(int j=1;j<=stars;j++){cout<<"* ";}
        cout<<endl;
    }*/  
  /* for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){cout<<j<<" ";}
        for(int j=1;j<=(2*n)-(2*i);j++){cout<<" ";}
        for(int j=i;j>=1;j--)
{

    cout<<j<<" ";
}    cout<<endl;}*/
/* for (int i = 0; i < n; i++) {
        for (char a = 'A'; a <= 'A' + i; a++) {
            cout << a << " ";
        }
        cout << endl;
    }*/

   


/* for(int i=0;i<n;i++)
    {for(char ch='C';ch>='C'+i;ch--)
    {cout<<ch<<" ";}
    cout<<endl;}*/
/*int spaces=2*n-2;
for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
    for(int j=1;j<=stars;j++){cout<<"*";}
    for(int j=1;j<=spaces;j++){cout<<" ";}
    for(int j=1;j<=stars;j++){cout<<"*";}
    cout<<endl;
    if(i<n)spaces -=2;
    
    else spaces +=2;
    }
*/
/*for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){
        if(i==0||j==0||i==n-1||j==n-1){ cout<<"*";}
       else cout<<" ";
    }
    
    cout<<endl;
}*/
/*for(int i=0;i<n;i++){

    for(int j=0;j<n;j++){
        if(i==0||j==0||i==n-1||j==n-1){ cout<<n;}
       else cout<<" ";
    }
    
    cout<<endl;
}*/
for(int i=0;i<2*n-1;i++){

    for(int j=0;j<2*n-1;j++){
int top=i;
int left=j;
int right=(2*n-2)-j;
int down=(2*n-2)-i;
cout<<(n-min(min(top,down),min(left,right)))<<" ";

    }
    cout<<endl;}


  
 
return 0;}