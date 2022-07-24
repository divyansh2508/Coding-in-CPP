//WAP to convert octal to decimal number.
#include<iostream>
using namespace std;
int oct_to_Dec(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter any Octal Number: ";  //binary numbers are like 453, 40, 1 etc.
    cin>>n;
    int ans=oct_to_Dec(n);
    cout<<"The Decimal form of the entered number is: "<<ans;
}