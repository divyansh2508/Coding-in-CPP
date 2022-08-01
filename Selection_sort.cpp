//WAP to sort the array using selection sort.
//Selection Sorting - Find the minimum element in usorted array and swap it with element at the begining.
#include<iostream>
using namespace std;
int *swap(int *m, int *n)
{
    *m=*m+*n;
    *n=*m-*n;
    *m=*m-*n;
    return m, n;
}
void display(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selsort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    display(arr, n);
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
    cout<<"The sorted array is: ";
    selsort(arr, n);
}