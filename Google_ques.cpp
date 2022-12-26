#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";  //entering the size of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";  //declaring elements in the array
        cin>>arr[i];
    }
    int ans=2;  //this variable is for the max length of the arithmetic array. It is initialized as 2 because the least length of sub-array will be 2.
    int pd=arr[1]-arr[0];   //this variable is for finding the common difference between the 2 array elements and to check too with current difference.
    int j=2;    //this variable is for looping. It is initialized as 2 because the difference operation atleast require 2 operands or variables.
    int curr=2; //this variable is for finding the current max length of the arithmetic array. It is initialized as 2 because the least length of sub-array will be 2.
    while(j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            curr++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<"The Longest Arithmetic Subarray is of length "<<ans<<"."<<endl;
}
