//WAP to convert a decimal number into hexadecimal number.
#include<iostream>
using namespace std;
string dectohex(int n)
{
    string ans="";
    int x=1;
    while(x<=n)
    {
        x*=16;
    }
    x/=16;
    while(x>0)
    {
        int lastdig=n/x;
        n-= lastdig*x;
        x/=16;
        if(lastdig<=9)
        {
            ans+=to_string(lastdig);
        }
        else
        {
            char c='A'+lastdig-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter any Decimal Number: ";
    cin>>n;
    string ans=dectohex(n);
    cout<<"The HexaDecimal form of the entered number is: "<<ans<<endl;
}