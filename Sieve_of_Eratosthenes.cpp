//WAP to implement the concept of Sieve of Eratosthenes through finding out the prime numbers in the entered range.

/*Sieve of Eratosthenes is a concept in which we mark the elements which are multiple of the prime numbers.
Iterating through which at the end we are left with the unmarked elements which are actually the prime numbers.*/

#include<iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)    //here the loop is starting from i*i because all previous multiples were already marked with the previous prime no.
                prime[j] = 1;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
            cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the ending range number of which you want the prime numbers to be displayed: ";
    cin>>n;
    primeSieve(n);
}
