#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v)
{
    int size=v.size();
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    for(int i=0;i<10;i++)
    {
        v.push_back(80);
    }
    print(v);
}