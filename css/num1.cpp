#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    int x1,x2,x3;
    int d;
    cin>>a>>b>>c;
    if(a==0)
    {
        if(b==0)
        {
        }
        else
        {
            x3=-c/b;
            cout<<x3;
        }
    }
    else
    {
        d=b*b-4*a*c;
        if(d==0)
        {
            cout<<"The roots are complex";
        }
        else
        {
            x1=(-b+sqrt(d)/(2*a));
            x2=(-b-sqrt(d)/(2*a));
            cout<<x1<<" "<<x2;
        }
    }
}