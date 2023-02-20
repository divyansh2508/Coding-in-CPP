//WAP to form all possible number of subsets using BIT manupulation.

#include<iostream>
using namespace std;

void subsets(int arr[], int n)
{
    for(int i=0;i<(1<<n);i++)   //In this repository there is one question of sub-arrays whose time complexity is O(n^3).
    {                           //In this code it has reduced to O(n^2)
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
                cout<<arr[j]<<" ";
        }cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the set: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"The possible number of subsets formed in the entered array are:"<<endl;
    subsets(a, n);
}
