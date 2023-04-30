/* 
1 x x2 x3 x4 .....xn
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int m=1;
    int x;
    cin>>x;
    cin>>n;
    int s=0;
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<i;j++)
        {
            m=x*m;
        }
        s=s+m;
        cout<<m<<" ";
        m=1;
    }
    cout<<"\n"<<s;
}