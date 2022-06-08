//WAP to print the given pattern:-
/*  ****
    *  *
    *  *
    *  *
    ****  */
#include<iostream>
using namespace std;
int main()
{
    int row, column;    //Declared 2 variables for rows and columns
    cout<<"Enter no. of rows: ";
    cin>>row;
    cout<<"Enter no. of columns: ";
    cin>>column;
    for(int i=0;i<row;i++)  //This loop is uesd for rows
    {
        for(int j=0;j<column;j++)   //This loop is used for columns
        {
            if(i==0 || i==row-1)  //This if condition is responsible for printing the first and last row with "*"
            {
                cout<<"*";
            }
            else if(j==0 || j==column-1)  //This if condition is responsible for printing the first and last column with "*"
            {
                cout<<"*";
            }
            else    //This else will keep the inner part of rectangla as hollow i.e. with space character
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}