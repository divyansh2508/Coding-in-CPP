//WAP to convert a decimal number into octal.
#include<iostream>
using namespace std;
int dec_to_oct(int n)
{
    int ans=0;
    int x=1;
    while(x<=n)
    {
        x*=8;
    }
    x/=8;
    while(x>0)
    {
        int lastdig=n/x;
        n-= lastdig*x;
        x/=8;
        ans=ans*10+lastdig;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter any Decimal Number: ";
    cin>>n;
    int ans=dec_to_oct(n);
    cout<<"The Octal form of the entered number is: "<<ans<<endl;
}