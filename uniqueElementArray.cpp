#include<iostream>
using namespace std;
int getUnique(int arr[],int n)
{
    int sol=0;
    for(int i=0;i<n;i++)
    {
        sol=sol^arr[i];
    }
    return sol;
}
int main()
{
    int arr[]={2,10,11,10,2,13,15,13,15};
    int n=9;
    int ans=getUnique(arr,n);
    cout<<"The unique element is:"<<ans<<endl;
}