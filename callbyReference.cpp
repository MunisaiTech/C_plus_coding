#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int&k=n;
    int&a=n;
    cout<<n<<endl;
    cout<<k<<endl;
    cout<<a<<endl;
    a++;
    int&b=n;
    cout<<b<<endl;
    
}
