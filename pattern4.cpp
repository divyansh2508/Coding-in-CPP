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
    int n;  //This variable is declared to take the input for the size of half pyramid after 180 deg rotation
<<<<<<< HEAD
    cout<<"How many rows you want to enter for the  Half Pyramid after 180 deg rotation?\nAns: ";
=======
    cout<<"How many rows you want to enter for the Half Pyramid after 180 deg rotation?\nAns: ";
>>>>>>> 80ebc1210801f642b87cd0a3eb693acf0a2550bf
    cin>>n;
    for(int i=1;i<=n;i++)   //This loop is used to change the line i.e., shifting to next row
    {
        for(int j=1;j<=n;j++)   //This loop is used to print the "*" and " " according to the if-else statement.
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
