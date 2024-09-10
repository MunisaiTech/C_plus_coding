#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>ch;
    int size=ch.size();
    ch.push_back('a');
    ch.push_back('b');
    ch.push_back('c');
    cout<<"First element:"<<ch[0]<<endl;
    cout<<"last element:"<<ch[ch.size()-1];
}