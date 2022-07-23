//WAP to print the below as output:
/*  1       for n=5
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1   */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"What is the size you want to enter for the 0-1 Pattern?\nAns: ";
    cin>>n;//This variable is declared to take the input for the size of 0-1 pattern
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<" 1";
            }
            else
            {
                cout<<" 0";
            }
        }
        cout<<endl;
    }
}