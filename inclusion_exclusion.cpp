//WAP to check the divisibility of the 2 entered numbers in the entered range.

#include <iostream>
using namespace std;

int divisible(int n, int a, int b)
{
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);

    return c1+c2-c3;
}

int main()
{
    int n, a ,b;
    cout<<"Enter the range till which you want to check the number of divisiblity: ";
    cin>>n;
    cout<<"Enter the first number for checking the divisibility: ";
    cin>>a;
    cout<<"Enter the second number for checking the divisibility: ";
    cin>>b;
    cout<<divisible(n, a, b);
}
