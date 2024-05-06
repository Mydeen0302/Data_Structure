 #include<bits/stdc++.h>
 using namespace std;
vector<int>unionBrute(vector<int>arr1,vector<int>arr2)
{
    set<int>temp;
    vector<int>un ={};
for(auto it:arr1)
{
    temp.insert(it);
}
for(auto it:arr2)
{
    temp.insert(it);
}
for(auto it :temp)
{
    un.push_back(it);
}
return un;
}
vector < int > unionOpt(vector < int > a, vector < int > b) {
    // Write your code here
    int n1 =a.size();
    int n2=b.size();
    int i=0,j=0;
    vector<int>union1;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
if(union1.size() ==0||union1.back() != a[i])
{
    union1.push_back(a[i]);
}
i++;
        }
else{
            if(union1.size() ==0||union1.back() != b[j])
{
    union1.push_back(b[j]);
}
j++;
        }

    }
while(i<n1)
    {
if(union1.size() ==0||union1.back() != a[i])
{
    union1.push_back(a[i]);
}
i++;
    }
    while(j<n2)
    {
               if(union1.size() ==0||union1.back() != b[j])
{
    union1.push_back(b[j]);
}
j++;   
    }
    return union1;
}
int main() {
    vector<int> arr1 = {1, 2, 3, 4, 6, 7};
    vector<int> arr2 = {1, 3, 4, 5,9};

    //vector<int> result = unionBrute(arr1, arr2);
vector<int>result=unionOpt(arr1, arr2);
    cout << "Union of arr1 and arr2 is: ";
    for(auto it : result) {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}