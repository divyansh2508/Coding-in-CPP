//WAP to print the below as output:
/*      1   for n=5
       212
      32123
     4321234
    543212345   */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"What is the size you want to enter for the Palindromic Pattern?\nAns: ";
    cin>>n;//This variable is declared to take the input for the size of palindromic pattern
    for(int i=1;i<=n;i++)
    {
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}