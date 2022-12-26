<<<<<<< HEAD
//WAP to sort the array elements using insertion sort.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";  //Declare the size of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array elements of the index["<<i<<"]: ";
        cin>>arr[i];    //Input the elements in the array
    }
    //applying insertion sort
    for(int i=1;i<n;i++)
    {
        int current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
=======
//WAP to sort the array elements using insertion sort.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";  //Declare the size of the array
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the array elements of the index["<<i<<"]: ";
        cin>>arr[i];    //Input the elements in the array
    }
    //applying insertion sort
    for(int i=1;i<n;i++)
    {
        int current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
>>>>>>> 6564d3b64707285bced0597e4817f34d8df0e930
