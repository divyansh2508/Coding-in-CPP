//This code is all about finding out the palindrome number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";  
    cin>>n;
    int n1;
    n1=n;
    int remainder, reversed=0;
    //Logic for Palindrome Number
    while(n1!=0)
    {
        remainder=n1%10;    //Extracting the last digit of the entered number
        reversed=reversed*10+remainder;//Storing the extracted digit w.r.t. its unit place
        n1=n1/10;   //Removing the last extracted digit from n1
    }
    if(n==reversed)     //if the number matches with the original number
    {
        cout<<"Entered number is a palindrome number!!";
    }
    else    //if the number does not matches with the original number
    {
        cout<<"Entered number is not a palindrome number!!";
    }
}