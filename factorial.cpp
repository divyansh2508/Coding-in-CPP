#include <iostream>
using namespace std;
int fact(int n)
{
    int facto=1;
    for(int i=1;i<=n;i++)
    {
        facto*=i;
    }
    return facto;
}
int main()
{
    int n;
    cout<<"Enter any integer: ";
    cin>>n;
    int ans=fact(n);
    cout<<"Factorial of the given number is: "<<ans<<endl;
}