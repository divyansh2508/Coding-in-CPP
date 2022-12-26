//WAP to binary search an element in the array.
#include<iostream>
using namespace std;
int *heapSort(int arr[], int n)
{

}
int check(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int *ptr;
            ptr=heapSort(arr, n);
            break;
        }
    }
    return ptr;
}
int bin(int arr[], int n, int key)
{
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
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
    int key;
    cout<<"Enter the key you want to search: ";
    cin>>key;
    check(arr, n);
    int ans=bin(arr, n, key);
    if(ans!=-1)
    {
        cout<<"The key is found at index number: "<<ans;
    }
    else
    {
        cout<<"The key is not found!!";
    }
}