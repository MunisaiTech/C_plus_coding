#include<iostream>
#include<vector>
using namespace std;
void arrayShifting(vector<int>arr,int k)
{
    int n=arr.size();
    vector<int>ans(n);
    for(int index=0;index<n;index++)
    {
        int newIndex=(index+k)%n;
        ans[newIndex]=arr[index];
    }
    cout<<"After shifting:";
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

}
int main()
{
    vector<int>arr={10,20,30,40,50,60};
    int k=3;
    arrayShifting(arr,k);

}