//WAP to print the below as output:
/*        *     for n=4
        * * *
      * * * * *
    * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *     */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"What is the size you want to enter for the Star Pattern?\nAns: ";
    cin>>n;//This variable is declared to take the input for the size of star pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}