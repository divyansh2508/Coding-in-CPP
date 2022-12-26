//WAP to print the sum of each subarray.
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
    int curr=0; //to store the current sum of the subarray
    for(int i=0;i<n;i++)
    {
        curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=arr[j];
            cout<<"The sum of subarray is: "<<curr<<endl;
        }
    }
}