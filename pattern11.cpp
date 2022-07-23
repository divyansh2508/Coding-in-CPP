//WAP to print the below as output:
/*      1   for n=5
       1 2 
      1 2 3 
     1 2 3 4 
    1 2 3 4 5   */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"What is the size you want to enter for the Number Pattern?\nAns: ";
    cin>>n;//This variable is declared to take the input for the size of number pattern
    for(int i=1;i<=n;i++)   //This loop is used to change the line i.e., shifting to next row
    {
        for(int j=1;j<=n-i;j++) //This loop will print spaces where required
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)   //This loop will print the numbers
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}