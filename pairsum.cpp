//WAP to print the pairsum of the given array which matches with the entered sum by the user.

#include <iostream>
using namespace std;

bool pairsum(int arr[], int n, int k)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k)
            high--;
        else
            low++;
    }
    return false;
}

int main()
{
    int n, s;
    cout<<"Enter the size of the array: ";  //entering the size of the array
    cin>>n;
    int arr[n];
    cout<<"Enter elements is ascending order: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<i+1<<": ";  //declaring elements in the array
        cin>>arr[i];
    }
    cout<<"Enter the sum you want: ";
    cin>>s;
    cout<<pairsum(arr, n, s)<<endl;
}
