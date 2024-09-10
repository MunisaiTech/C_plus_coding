#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int row=0;row<3;row++)
    {
        if(row==0 || row==2)
        {
            for(int col=0;col<n;col++)
            {
                cout<<"*";
            }
        }
        else
        {
            cout<<"*";
            for(int i=0;i<3;i++)
            {
                cout<<" ";
            }
            cout<<"*";

        } 
        cout<<endl;
    }   
    

}