#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int op;
    cout<<"What is your option:"<<endl;
    cin>>op;
    float ans=0;
    switch (op)
    {
    case 0:
           ans=a+b;
           break;
    case 1:
          ans=a-b;
          break;
    case 2:
          ans=a*b;
          break;
    case 3:
          ans=a/b;
          break;                      
    
    default:
    cout<<"Invalid option";
        break;
    }
    cout<<"answer:"<<ans<<endl;
}