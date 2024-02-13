#include<bits/stdc++.h>
using namespace std;

void printinfinite() {
    cout << "1" << endl;
    printinfinite();
}

int cnt = 0;

void printwithbasecondition() {
    if (cnt == 4) {
        return;
    }
    else {
        cout << cnt << " ";
        cnt++;
        printwithbasecondition();
    }
}

void printyournamefortimes(string name, int i, int n) {
    if (i > n) {
        return;
    }
    else {
        cout << name << endl;
        printyournamefortimes(name, i + 1, n);
    }
}
  void printnumberforntimes(int i,int n){
    if(i>n){
        return;
    }
    else{
        cout<<i<<endl;
        printnumberforntimes(i+1,n);
    }
  }
void printnumberinreverse(int i,int n)
{

    if(n<i)
    {return;}
    else{
        cout<<n<<endl;
        printnumberinreverse(i,n-1);
    }
}
void printnumberbybacktracking(int i,int n){

    if(i<1){return;}
    else{
        printnumberbybacktracking(i-1,n);
        cout<<i<<endl;
    }
}
void printrev_numberbybacktracking(int i,int n)
{
    if(i>n)
    {cout<<"backtracking starts from:"<<i<<endl;
        return ;}
    else{
        printrev_numberbybacktracking(i+1,n);
        cout<<i<<endl;
    }
}
int main() {
    // printinfinite();
    int n;
   // string name;
   // cout << "Enter your name:" << endl;
   // cin >> name;

    // Clear any newline characters in the input buffer
  //  cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter how many times you want to print it:" << endl;
    cin >> n;
    // printwithbasecondition();
    //printyournamefortimes(name, 1, n);
//printnumberforntimes(1,n);
//printnumberinreverse(1,n);
//printnumberbybacktracking(n,n);
printrev_numberbybacktracking(1,n);
    return 0;
}
