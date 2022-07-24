//WAP to check whther the entered triplet is a Pythagorean Triplet or not.
#include <iostream>
#include <math.h>
using namespace std;
bool check(int x, int y, int z)
{
    int a = max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        b=x;
        c=y;
    }
    if(pow(a,2)==pow(b,2)+pow(c,2))
        return true;
    else
        return false;
}
int main()
{
    int x,y,z;
    cout<<"Enter 3 numbers x y z respectively: ";
    cin>>x >> y >> z;
    if(check(x,y,z)==true)
    {
        cout<<"The entered triplet is a Pythagorean Triplet!!";
    }
    else
    {
        cout<<"The entered triplet is not a Pythagorean Triplet!!";
    }
}