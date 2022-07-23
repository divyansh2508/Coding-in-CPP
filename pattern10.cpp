//WAP to print the below as output: 
/*      * * * * *   for n=5
       * * * * * 
      * * * * * 
     * * * * * 
    * * * * *   */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"What is the size you want to enter for the Rhombus Pattern?\nAns: ";
    cin>>n;//This variable is declared to take the input for the size of rhombus pattern
    for(int i=1;i<=n;i++)   //This loop is used to change the line i.e., shifting to next row
    {
        for(int j=1;j<=n-i;j++) //This loop is used to print the spaces where required
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)   //This loop is used to print "*" where required
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}