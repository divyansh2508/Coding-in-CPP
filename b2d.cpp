//WAP to convert binary to decimal number.
#include<iostream>
#include<math.h>
using namespace std;
int bintoDec(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter any binary number: ";  //binary numbers are like 453, 40, 1 etc.
    cin>>n;
    int ans=bintoDec(n);
    cout<<"The Decimal form of the entered number is: "<<ans;
}