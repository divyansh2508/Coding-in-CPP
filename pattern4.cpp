//WAP to print the below as output:
/*      *   for n=5
       **
      ***
     ****
    *****   */
#include<iostream>
using namespace std;
int main()
{
    int n;  //This variable is declared to take the input for the size of inverted half pyramid
    cout<<"How many rows you want to enter for the  Half Pyramid after 180 deg rotation?\nAns: ";
    cin>>n;
    for(int i=1;i<=n;i++)   //This loop is used to change the line i.e., shifting to next row
    {
        for(int j=1;j<=n;j++)   //This loop is used to print the "*" on the particular line
        {
            if(j<=n-i)
            {
                cout<<"  ";     //I have taken an extra space in both(if and else) cout for better visuals 
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<"\n";
    }
}