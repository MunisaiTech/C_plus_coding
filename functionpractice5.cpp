#include<iostream>
using namespace std;
int printResult(float r)
{
    float area=3.14*(r*r);
    return area;
}
int main()
{
    float ans=printResult(4);
    cout<<"Area of the circle is:"<<ans<<endl;
}