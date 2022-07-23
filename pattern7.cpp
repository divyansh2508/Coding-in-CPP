//WAP to print the below as an output:
/*  *      *    for n=4
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *    */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"What is the size you want to enter for the Butterfly Pattern?\nAns: ";
    cin>>n;//This variable is declared to take the input for the size of butterfly pattern
    for(int i=1;i<=n;i++)   //This loop is used to change the line i.e., shifting to next row
    {
        for(int j=1;j<=i;j++)   //This loop is used to print the nos. on the particular line
        {
            cout<<"*";
        }
        int space=2*n - 2*i;    //This variable is used to calculate the gap between stars when required
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //The below code is copied from above for the reverse pattern to create butterfly
    for(int i=n;i>=1;i--)   //This loop is different from the above one
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*n - 2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}