//WAP to print the below as output:
/*  1   for n=5
    22
    333
    4444
    55555   */
#include<iostream>
using namespace std;
int main()
{
    int n;  //This variable is declared to take the input for the size of half pyramid using numbers
    cout<<"How many rows you want to enter for the Half Pyramid using numbers?\nAns: ";
    cin>>n;
    for(int i=1;i<=n;i++)   //This loop is used to change the line i.e., shifting to next row
    {
        for(int j=1;j<=i;j++)   //This loop is used to print the nos. on the particular line
        {
            
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}