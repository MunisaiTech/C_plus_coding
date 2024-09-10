#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Marks of the student:";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"A";
    }
    else if(marks>=80)
    {
        cout<<"B";
    }
    else if(marks>=40)
    {
        cout<<"D";
    }
    else
    {
        cout<<"Fail";
    }

}
