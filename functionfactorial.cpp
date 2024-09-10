#include<iostream>
using namespace std;
int factorial(int n)
{
    int result=1;
    for(int i=1;i<=n;i++)
    {
        result*=i;
    }
    return result;
}
int main()
{
    int ans=factorial(4);
    cout<<"Factorial of the number is :"<<ans<<endl;
}