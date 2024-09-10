#include<iostream>
using namespace std;
bool check(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    bool prime=check(10);
    if(prime)
    {
        cout<<"it is a prime number"<<endl;
    }
    else{
        cout<<"it is not a prime number"<<endl;
    }
}