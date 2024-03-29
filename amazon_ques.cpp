//You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

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
    const int N=1e6+2;
    bool check[N];
    for(int i=0;i<N;i++)
        check[i]=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
            check[arr[i]]=1;
    }
    int ans=-1;
    for(int i=0;i<N;i++)
    {
        if(check[i]==0)
        {
            ans=i;
            break;
        }
    }
    cout<<"The missing smallest positive integer is: "<<ans<<endl;
    return 0;
}
