//WAP to display the Pascal Triangle:
/*  1       for n=5
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1   */
#include <iostream>
using namespace std;
int fact(int n)
{
    int facto=1;
    for(int i=1;i<=n;i++)
    {
        facto*=i;
    }
    return facto;
}
int main()
{
    int n;
    cout<<"Enter the number of rows of Pascal Triangle: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}