//WAP to display the sum of first n natural numbers.
#include <iostream>
using namespace std;

int natural(int n)
{
    return ((n*(n+1))/2);
}

int main()
{
    int n;
    cout<<"Enter the integer till which sum of natural numbers are to be displayed: ";
    cin>>n;
    int ans=natural(n);
    cout<<"The sum is: "<<ans;
}