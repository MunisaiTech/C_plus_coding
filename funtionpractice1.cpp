#include<iostream>
using namespace std;
void printMax(int a,int b,int c)
{
    if(a>b && a>c)
    {
        cout<<"max is :"<<a<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"Max is:"<<b<<endl;
    }
    else{
        cout<<"Max is:"<<c<<endl;
    }
}
int main()
{
    printMax(3,5,1);
}