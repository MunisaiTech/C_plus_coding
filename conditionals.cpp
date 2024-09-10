#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age";
    cin>>age;
    if(age>=18)
    {
        cout<<"Eligible for vote"<<endl;

    }
    else
    {
        cout<<"Not eligible for vote"<<endl;
    }
}