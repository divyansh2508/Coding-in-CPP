#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int n)
{
    int flag;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b, flag=0;
    cout<<"Enter the range of number for which you would like to check whsther they are prime or not:"<<endl;
    cout<<"Enter starting number: ";
    cin>>a;
    cout<<"Enter the last number: ";
    cin>>b;
    cout<<"The Prime Number(s) for the entered range is/are: "<<endl;
    for(int i=a;i<=b;i++)
    {
        if(isPrime(i)==true)
        {
            flag++;
            cout<<i<<endl;
        }
    }
    if(flag==0)
    {
        cout<<"0"<<endl<<"The entered range does not contain any prime number!!"<<endl;
    }
}