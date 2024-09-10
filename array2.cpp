#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int n=5;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       // cout<<"After taking input:"<<arr[i]<<" ";
    }
    cout<<"After taking the input:"<<endl;
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }
}