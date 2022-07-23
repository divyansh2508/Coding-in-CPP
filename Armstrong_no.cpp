//WAP to print whether the entered number is an Armstrong number or not
/* Armstrong number: A number whose digits when cubed and added up gives the same result as the original number is known as Armstrong number.
For eg. 153*/
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, sum=0;
    cout<<"Enter any integer: ";
    cin>>n;
    int n1=n;
    while(n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit, 3);
        n=n/10;
    }
    if(sum==n1)
    {
        cout<<"The entered number is an Armstrong Number!!"<<endl;
    }
    else
    {
        cout<<"The entered number is not an Armstrong Number!!"<<endl;
    }
}