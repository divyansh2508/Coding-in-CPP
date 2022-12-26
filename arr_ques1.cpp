//WAP to take out the maximum element from the ith iteration.
#include <iostream>
using namespace std;

int main()
{
    int mx=-19999999;   //taking the minimalist value of mx so that entered element can be as appropriate as possible
    int n;
    cout<<"Enter the size of the array: ";  //entering the size of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";  //declaring elements in the array
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx, arr[i]); //checking the maximum number out of the ith iteration
        cout<<"The maximum no. from 0 to "<<i<<"element is: "<<mx<<endl;
    }
    return 0;
}