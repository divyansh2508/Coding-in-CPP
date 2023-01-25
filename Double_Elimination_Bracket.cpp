/*WAP of Double Elimination Bracket Tournament. Tell the possible number of fair matches amongst all teams and
check whether the entered number of teams can have fair number of matches or not.
Constraint: Initially lower bracket teams cannot play matches. After the upper bracket match the losers of them will match with lower bracket teams.*/
#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    int n, c, cal=0, tnm=0;
    cout<<"Enter number of teams: ";
    cin>>n;
    if(n%3==0)
        c=n/3;
    else
    {
        cout<<"Fair matches are not possible in these number of teams!!";
        return 0;
    }
    if(isPowerOfTwo(c)==false)
    {
        cout<<"Fair matches are not possible in these number of teams!!";
        return 0;
    }
    else
    {
        int l=c;    //team division of lower bracket
        int u=c*2;  //team division of upper bracket
        tnm=((u-1)+2*(l-1)+l+1);    //calculation of total number of matches of both the brackets
        cout<<"Total number of matches that can be played in these number of teams are: "<<tnm<<endl;
        cout<<"The division being "<<u<<" for upper bracket and "<<l<<" for lower bracket";
    }
}
