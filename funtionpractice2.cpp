#include<iostream>
using namespace std;
void printSum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=ans+i;
    }
    cout<<"Sum of the number is:"<<ans<<endl;
}
int main()
{
    printSum(4);

}
