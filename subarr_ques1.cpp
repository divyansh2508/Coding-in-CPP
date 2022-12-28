//WAP to print all the possible sub-arrays out of a given array.

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
    cout<<endl<<"The possible sub-arrays formed are:"<<endl;
    for(int i=0;i<n;i++)    //Starting Pointer
    {
        for(int j=i;j<n;j++)    //Ending Pointer
        {
            for(int k=i;k<=j;k++)   //printing the values between the starting and the ending pointers
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
