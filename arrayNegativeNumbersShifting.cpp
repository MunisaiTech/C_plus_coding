#include<iostream>
#include<vector>
using namespace std;
void shiftNegative(int arr[],int n)
{
    int j=0;
    for(int index=0;index<n;index++)
    {
        if(arr[index]<0)
        {
            swap(arr[index],arr[j]);
            j++;

        }
    }
    cout<<"After sorting :"<<endl;
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i]<<" "; 
    }
}
int main()
{
    int arr[]={23,-7,12,-10,-1,40,60};
    int n=7;
    shiftNegative(arr,n);

}