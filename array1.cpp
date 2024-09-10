#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    int n=5;
    for(int i=0;i<n;i++)
    {
        arr[i]=2*arr[i];
        cout<<"double value:"<<arr[i]<<endl;
    }
}
   