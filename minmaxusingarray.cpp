#include<iostream>
#include<limits.h>
using namespace std;
int findMinimum(int arr[],int size)
{
    int minAns=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<minAns)
        {
            minAns=arr[i];
        }
    }
    return minAns;
}
int main()
{
    int arr[]={10,8,31,4,3,1,51};
    int size=7;
    int minimum=findMinimum(arr,size);
    cout<<"Minimum number of the array is:"<<minimum<<endl;
}