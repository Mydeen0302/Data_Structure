#include<bits/stdc++.h>
using namespace std;
void extractionOfDigits(int num){
    int digit;
    int count=0;
    int n=num;
while(num>0){
digit=num%10;
num=num/10;
if(n%digit==0)
{count++;}


}
cout<<count;
    
}
void rev_num(int num){
int digit;
int sign=1;
int rev_num=0;
if(num<0){
    sign=-1;
    num=-num;
}
while(num>0){
    digit=num%10;
num=num/10;
rev_num=(rev_num * 10)+digit;
}
rev_num *=sign;
cout<<rev_num;
}

void checkPalindrome(int num){
int originalNum=num;
    int digit;
int sign=1;
int rev_num=0;
if(num<0){
    sign=-1;
    num=-num;
}
while(num>0){
    digit=num%10;
num=num/10;
rev_num=(rev_num * 10)+digit;
}
rev_num *=sign;
if(rev_num == originalNum){
    cout<<"It's a Palindrome"<<endl;
}
else{
    cout<<"It's not a palindrome"<<endl;
}
}

 void checkArmstrong(int num){
        int originalNum=num;
        int digit;
        int armstrong=0;
    while(num>0){
    digit=num%10;
num=num/10;
armstrong +=digit*digit*digit;
}
if(originalNum==armstrong){cout<<"it's armstrong"<<endl;}
else{cout<<"it's not armstrong"<<endl;}
 }
void printAllDivisors(int num)
{
    for(int i=1;i<=num;i++){
        if(num % i==0){
            cout<<i<<" ";
        }
    }
}

void printAllDivisors2(int num)
{
    vector<int>ls;
    for(int i=1;i<=sqrt(num);i++){
        if(num % i==0){
      ls.push_back(i);
        }
        if(num/i  != i){
ls.push_back(num/i);
        }
    }
   
        sort(ls.begin(),ls.end());
    
     for(auto it:ls){
        cout<<it<<" ";
    }
}
void BruteforcePrime(int num){
  
  int count=0;  
  for(int i=0;i<=num;i++)
  {  
    if(num % i==0){count++;}
  }
  if(count == 2){cout<<"it's a Prime"<<endl;}
  else cout<<"it's not a prime"<<endl;
  
}
void optimalPrime(int num){
    int count=0;
    for(int i=1;i*i<=num;i++){
if(num%i==0){count++;
if(num /i != i){
    count++;
}
}


    }
    if(count == 2){cout<<"it's a prime";}
    else cout<<"not a Prime";

}
void GCD(int num1,int num2){
    int Gcd;
    for(int i=min(num1,num2);i>=1;i--){
        if(num1 % i==0 && num2%i == 0){
            Gcd=i;
            break;
        }
    }
    cout<<Gcd;
}
void optimalGcd(int num1,int num2){
    while(num1>0 && num2>0){
        if(num1>num2){num1=num1%num2;}
        else num2=num2%num1;
        if(num1==0)
        {
            cout<<num2;
            break;
        }
        else{
            cout<<num1;
            break;
        }
    }
}

int main(){
    int num;
    cout<<"enter the number:"<<endl;
    cin>>num;
  int num2;
  cin>>num2;
//extractionOfDigits(num);
//rev_num(num);
//checkPalindrome(num);
//checkArmstrong(num);
//printAllDivisors(num);
//printAllDivisors2(num);
//BruteforcePrime(num);
//optimalPrime(num);
//GCD(num,num2);
optimalGcd(num,num2);
    return 0;
}