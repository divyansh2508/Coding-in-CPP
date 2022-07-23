#include <iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;
    int nextTerm;
    cout<<"Fibonacci series: ";
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<" ";
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number till which you want the Fibonacci series to be displayed: ";
    cin>>n;
    fib(n);
}