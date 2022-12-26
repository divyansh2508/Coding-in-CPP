//WAP to sort the array elements using Bubble Sort.
#include<iostream>
using namespace std;
int *swap(int *m, int *n)
{
    *m=*m+*n;
    *n=*m-*n;
    *m=*m-*n;
    return m, n;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element "<<(i+1)<<": ";
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(&arr[i], &arr[i+1]);
            }
        }
        counter++;
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
