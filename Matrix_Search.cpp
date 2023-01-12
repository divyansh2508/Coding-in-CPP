/*WAP for matrix search of order n*m, but it should be in the manner that rows and columns both are sorted and in ascending order.
For eg
1 4 7 11
2 5 8 12
3 6 9 16
10 13 14 17 */
#include<iostream>
using namespace std;

int main()
{
    int n, m, target;
    cout<<"Enter the order of the matrix[n][m]: ";
    cin>>n>>m;
    int A[n][m];
    //2D array intialization
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<"Enter Element ["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }   //Array Initialization ends
    cout<<"Enter the element you want to search in the matrix: ";
    cin>>target;
    //logic for searching
    int r=0, c=m-1;
    bool found=false;
    while(r<n and c>=0)
    {
        if(A[r][c] == target)
        {
            found=true;
        }
        if(A[r][c]>target)
            c--;
        else
            r++;
    }   //end of logic
    if(found)
        cout<<"Element Found!!";
    else
        cout<<"Element doesn't exist!!";
}
