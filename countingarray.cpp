#include<iostream>
using namespace std;
void counting(int arr[],int size)
{
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            zerocount++;
        }
        if(arr[i]==1)
        {
            onecount++;
        }
    }
    cout<<"Zerocount value:"<<zerocount<<endl;
    cout<<"Onecount value:"<<onecount<<endl;

}
int main()
{
    int arr[11]={0,0,1,0,1,1,1,0,1,0,0};
    //0-6,1-5
    int size=11;
    counting(arr,size);
}