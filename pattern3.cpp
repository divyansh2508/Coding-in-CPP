//WAP to print the below output:-
/*  *****   for n=5
    ****
    ***
    **
    *       */
#include<iostream>
using namespace std;
int main()
{
    int n;  //This variable is declared to take the input for the size of inverted half pyramid
    cout<<"How many rows you want to enter for the inverted half pyramid?\nAns: ";
    cin>>n;
    for(int i=n;i>=1;i--)   //This loop is used to change the line i.e., shifting to next row
    {
        for(int j=1;j<=i;j++)   //This loop is used to print the "*" on the particular line
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}