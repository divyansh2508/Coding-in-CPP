//WAP to enter 2 numbers and check their greatest common divisor using Euclid Algorithm.

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    int a, b;
    cout<<"Enter the 2 numbers for which you want the Greatest Common Divisor (GCD): "<<endl;
    cout<<"Enter the 1st number: ";
    cin>>a;
    cout<<"Enter the 2nd number: ";
    cin>>b;
    cout<<gcd(a, b);
    return 0;
}
