#include<bits/stdc++.h>
using namespace std;
vector<string> belowten={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    vector<string> belowtwenty={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    vector<string> belowhundred={"","Ten","Tewnty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    string numberToWords(int num) {
        if(num == 0){return "Zero";}
        if(num < 10){return belowten[num];}
        if(num<20){return belowtwenty[num-10];}
        if(num<100){return belowhundred[num/10] + (num%10==0?"":" "+numberToWords(num%10) );}
        if(num<1000) {return belowten[num/100]+" Hundred"+(num %100 == 0?"":" "+ numberToWords(num%100));}
        if(num<1000000) {return belowten[num/1000]+" Thousand"+(num %1000 == 0?"":" "+ numberToWords(num%1000));}
        if(num<1000000000) {return belowten[num/1000000]+" Million"+(num %1000000 == 0?"":" "+ numberToWords(num%1000000));}
        return belowten[num/1000000000]+" Billion"+(num %1000000000 == 0?"":" "+ numberToWords(num%1000000000));
    }
int main()
{   
    string s= numberToWords(1234567);
    cout<<s;
    return 0;
}