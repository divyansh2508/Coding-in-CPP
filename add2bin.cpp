#include <iostream>
using namespace std;
int reverse(int n)  //function to reverse the number
{
    int ans=0;
    while(n>0)
    {
        int lastdig=n%10;
        ans=ans*10+lastdig;
        n/=10;
    }
    return ans;
}
int addBin(int a, int b)    //function to add 2 binary numbers
{
    int ans=0;
    int prev=0; //This variable is used to store the previous carry while the addition of two digits
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans = ans*10+prev;
            prev=0;
        }
        else if((a%2==0 && b%2==1)||(a%2==1 && b%2==0))
        {
            if(prev==1)
            {
                ans=ans*10 + 0;
                prev=1;
            }
            else
            {
                ans=ans*10 + 1;
                prev=0;
            }
        }
        else
        {
            ans=ans*10 + prev;
            prev=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0)
    {
        if(prev==1)
        {
            if(a%2==1)
            {
                ans=ans*10 + 0;
                prev=1;
            }
            else
            {
                ans=ans*10+1;
                prev=0;
            }
        }
        else
        {
            ans=ans*10+(a%2);
        }
        a/=10;
    }
    while(b>0)
    {
        if(prev==1)
        {
            if(b%2==1)
            {
                ans=ans*10 + 0;
                prev=1;
            }
            else
            {
                ans=ans*10+1;
                prev=0;
            }
        }
        else
        {
            ans=ans*10+(b%2);
        }
        b/=10;
    }
    if(prev==1)
    {
        ans=ans*10+1;
    }
    ans=reverse(ans);
    return ans;
}

int main()  //Driver Code
{
    int a,b;
    cout<<"Enter two binary numbers: "<<endl<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"The addition of the two binary numbers is: "<<addBin(a, b)<<endl;
}