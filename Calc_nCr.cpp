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
    int n,r;
    cout<<"Enter number of items(n): ";
    cin>>n;
    cout<<"Enter number of items being chosen at a time(r): ";
    cin>>r;
    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<"The calculated possible number of combinations are: "<<ans<<endl;
}