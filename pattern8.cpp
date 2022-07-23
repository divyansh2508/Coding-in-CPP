//WAP to print below as output:
/*  1 2 3 4 5   for n=5
    1 2 3 4 
    1 2 3 
    1 2 
    1   */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"What is the size you want to enter for the Inverted Pattern?\nAns: ";
    cin>>n;//This variable is declared to take the input for the size of inverted pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}