#include<bits/stdc++.h>
using namespace std;
void rotate90(int arr[3][3])
{
    int dummy[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
dummy[j][3-i-1]=arr[i][j];

        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
arr[i][j]=dummy[i][j];
        }
    }
}
    


void rotate90opt(int arr[3][3]) {
    // Transpose the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    
    // Reverse each row
    for (int i = 0; i < 3; i++) {
        reverse(arr[i].begin(), arr[i].end());
    }
}
int main()
{
    int arr[3][3] = {{1,2,3},
    {4,5,6},
    {7,8,9}};
rotate90(arr);
rotate90opt(arr);
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j]<<",";
    }
    cout<<endl;
}
return 0;


}