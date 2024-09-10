#include<iostream>
#include<vector>
using namespace std;
void sortNumbers(vector<int>v)
{
    int n=v.size();
    int index=0;
    int left=0;
    int right=n-1;
    while(index<=right)
    {
        if(v[index]==0)
        {
            swap(v[index],v[left]);
            index++;
            left++;
        }
        else if(v[index]==2)
        {
            swap(v[index],v[right]);
            right--;
        }
        else
        {
            index++;
        }
    }
    cout<<"After sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int>v={1,0,2,2,1,0,1,0};
    sortNumbers(v);
}