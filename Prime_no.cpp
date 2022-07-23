//WAP to print whether the entered number is an Prime number or not
//  Prime number: These are those numbers which either divides by itself or by 1.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, flag;
    cout<<"Enter any integer: ";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"The entered integer is not a prime number!!"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"The entered integer is a prime number!!"<<endl;
    }
}