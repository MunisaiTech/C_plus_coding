#include<iostream>
using namespace std;
void printSum(int n)
{
    int ans=0;
    for(int i=2;i<=n;i=i+2)
    {
        ans=ans+i;
    }
    cout<<"Sum of the  even numbers is:"<<ans<<endl;
}
int main()
{
    printSum(8);

}
