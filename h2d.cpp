//WAP to convert hexadecimal to decimal number.
#include<iostream>
#include<string.h>
using namespace std;
int hextodec(string n)
{
    int ans=0;
    int x=1;
    int s= n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans+=x*(n[i]-'0');
        }
        else if (n[i]>='A' && n[i]<='F')
        {
            ans+=x*(n[i]-'A' + 10);
        }
        x*=16;
    }
    return ans;
}
int main()
{
    string n;
    cout<<"Enter any Hexadecimal Number: ";  //hexadecimal numbers are like 1CF, ABC, 123 etc.
    cin>>n;
    int ans=hextodec(n);
    cout<<"The Decimal form of the entered number is: "<<ans<<endl;
}