//WAP to linearly search an element in the array.
#include<iostream>
using namespace std;
int linear(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
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
    int ans=linear(arr, n, key);
    if(ans!=-1)
    {
        cout<<"The key is found at index number: "<<ans;
    }
    else
    {
        cout<<"The key is not found!!";
    }
}