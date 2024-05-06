#include <bits/stdc++.h>
using namespace std;

int misnumbrute(vector<int> arr) {
    int n = arr.size();
    int N = n + 1;
    int flag = 0;
    for (int i = 1; i <= N; i++) {
        flag = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            return i;
        }
    }
}

int missBetter(vector<int> arr) {
    int n = arr.size();
    vector<int> hash(n + 1, 0); // Initialize hash with 0
    for (int i = 0; i < n; i++) {
        hash[arr[i]] = 1; // Mark present numbers in hash
    }
    for (int i = 1; i <= n + 1; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
}
int missOpt1(vector<int>arr)
{
    int n=arr.size();
    int N=n+1;
    int sum1= N*(N+1)/2;
    int sum2=0;
    for(auto it:arr)
    {
sum2 += it;
    }
    int num=sum1-sum2;
    return num;
}
int missOpt2(vector<int>arr)
{
    int xor1=0,xor2=0;
    int n=arr.size();
    int N=n+1;
    
    for(int i=0;i<n;i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
  xor1=  xor1^N;
    int res=xor1^xor2;
    return res;
}

int main() {
    vector<int> arr = {3,1}; // Initialize your vector with some values
    // int result = misnumbrute(arr);
    //int result = missBetter(arr);
    //int result=missOpt1(arr);
    int result=missOpt2(arr);
    cout << "Missing number: " << result << endl;
    return 0;
}
