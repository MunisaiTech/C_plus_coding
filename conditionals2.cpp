#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks of the student:";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"A grade";
    }
    else
    {
        if(marks>=80){
            cout<<"B grade";
        }
    else
    {
        if(marks>=40){
            cout<<"C grade";
        }
    else{
        cout<<"Fail";
    }    

    }    

    }
}
