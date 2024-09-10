#include<iostream>
using namespace std;
int printSum(int a,int b,int c)
{
    int ans=a+b+c;
    return ans;
}
int main()
{
    int result=printSum(1,2,3);
    cout<<"Sum of three numbers is :"<<result<<endl;
}