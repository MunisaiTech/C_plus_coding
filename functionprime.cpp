#include<iostream>
using namespace std;
void printLine(int n)
{
    int j=2;
    for(int i=2;i<=n;i++)
    {
        if(j%i !=0)
        {
        
            cout<<i<<endl;
            j=j+1;
        }
        
    }
}
int main()
{
    printLine(11);
}