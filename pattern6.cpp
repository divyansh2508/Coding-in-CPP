//WAP to print the below as output:
/*  1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15  */
#include <iostream>
using namespace std;

int main()
{
    int n, count=1;//This variable is declared to take the input for the size of floyd's triangle using numbers
    cout<<"How many rows you want to enter for the Floyd's Triangle using numbers?\nAns: ";
    cin>>n;
    for(int i=1;i<=n;i++)   //This loop is used to change the line i.e., shifting to next row
    {
        for(int j=1;j<=i;j++)   //This loop is used to print the nos. on the particular line
        {
            cout<<count ;
            count++;
        }
        cout<<endl;
    }
    return 0;
}