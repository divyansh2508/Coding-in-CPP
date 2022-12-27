//Given an unsorted array A of size n of non-negative integers. Find the continuous sub-array which adds to a given number S.

#include <iostream>
using namespace std;

int main()
{
    //initialization and declaration of all the variables and arrays
    int n,s;
    cout<<"Enter the size of the array: ";  //entering the size of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";  //declaring elements in the array
        cin>>arr[i];
    }
    cout<<"Enter the sum: ";
    cin>>s;
    int i=0, j=0, st=-1, en=-1, sum=0;
    //semantics of the code
    while(j<n && sum+arr[j]<=s) //looping till either the j pointer terminates the array or the desired sum exceeds the current sum
    {
        sum+=arr[j];
        j++;
    }
    if(sum==s)
    {
        cout<<"The starting and ending index are: "<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=arr[j];
        while(sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<"The starting and ending index are: "<<st<<" "<<en<<endl;
    return 0;
}
