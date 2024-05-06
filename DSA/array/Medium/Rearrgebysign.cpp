#include <bits/stdc++.h>
using namespace std;

vector<int> Bruterearr(vector<int> arr) {
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            arr[i] = pos[i / 2];
        } else {
            arr[i] = neg[i / 2];
        }
    }
    return arr; // Return the modified array
}

vector<int> variety2(vector<int> arr) {
    vector<int> pos;
    vector<int> neg;
    
    // Separate positive and negative numbers into separate vectors
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0) {
            pos.push_back(arr[i]);
        } else {
            neg.push_back(arr[i]);
        }
    }
    
    if (pos.size() > neg.size()) {
        int i;
        // Merge elements from both vectors into arr maintaining order
        for (i = 0; i < neg.size(); i++) {
            if (i % 2 == 0) {
                arr[i] = pos[i / 2];
            } else {
                arr[i] = neg[i / 2];
            }
        }
        // Add remaining elements from pos to arr
        while (i < pos.size()) {
            arr.push_back(pos[i]);
            i++;
        }
    } else if (pos.size() < neg.size()) {
        int i;
        // Merge elements from both vectors into arr maintaining order
        for (i = 0; i < pos.size(); i++) {
            if (i % 2 == 0) {
                arr[i] = pos[i / 2];
            } else {
                arr[i] = neg[i / 2];
            }
        }
        // Add remaining elements from neg to arr
        while (i < neg.size()) {
            arr.push_back(neg[i]);
            i++;
        }
    } 

       else{for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            arr[i] = pos[i / 2];
        } else {
            arr[i] = neg[i / 2];
        }
    }}
    return arr;
}
vector<int> opt(vector<int>arr)
{
vector<int>arr2(arr.size());
int pos=0;
int neg=1;
for(int i=0;i<arr.size();i++)
{
    if(arr[i]<0) 
    {
        arr2[neg]=arr[i];
neg=neg+2;
    }
    else{
        arr2[pos]=arr[i];
        pos=pos+2;
    }
}
return arr2;
}
int main() {
    vector<int> arr = {3,1,-2,-5,5,-5,9,6,-8};
  /* arr = Bruterearr(arr); // Assign the returned array back to arr
    for (auto it : arr) {
        cout << it << " ";
    }*/ 
  /*arr=opt(arr);
    for (auto it : arr) {
        cout << it << " ";
    }*/  

    arr=variety2(arr);
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}
