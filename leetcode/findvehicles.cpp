#include<bits/stdc++.h>
using namespace std;
/*int find(int tire,int vehicles)
{
    for(int i=0;i<vehicles;i++)
    {
        int ans =(vehicles-i)*2 + (i*4);
        if(ans == tire) cout<<(vehicles-i)<<" "<<i;
    }
}*/void find(int tire, int vehicles) {
    int low = 0, high = vehicles;

    while (low <= high) {
        int mid = (low + high) / 2;
        int ans = (vehicles - mid) * 2 + (mid * 4);

        if (ans == tire) {
            cout << (vehicles - mid) << " " << mid << endl;
            return;  // Exit the function once the correct combination is found
        } else if (ans > tire) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    // If no valid combination is found
    cout << "No valid combination found." << endl;
}
int main()
{   int tire=540,vehicles=200;
 find(tire,vehicles);
    return  0;
}