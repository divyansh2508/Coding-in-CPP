//WAP to print below as output:
/*  |
    |   *   *
    |  * * * *
    | *   *   *
    |_____________________  */
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"What is the size you want to enter for the Zig Zag Pattern?\nAns: ";
    cin>>n;//This variable is declared to take the input for the size of Zig Zag pattern
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((i+j)%4==0 || (i==2 && j%4==0))
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
//The if condition is applied on the basis of adding the index of the desired * at that cell and those who are divisible by 4 are having * whereas 2 which are left are seen as in row 2 and column should be divisible by 4.