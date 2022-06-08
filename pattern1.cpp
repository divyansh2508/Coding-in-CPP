//WAP to print the below pattern:-
/*  ****
    ****
    ****
    ****
    ****  */
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)    //This loop is used for columns
    {
        for(int j=0;j<4;j++)    //This loop is used for rows
        {
            cout<<"*";
        }
        cout<<"\n";     //This statement is used to change the line after the loop terminates that means after the row gets printed
    }
}