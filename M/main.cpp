#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>n;
        int x = (n*63+7492)*5-498;
        if(x < 0)
            x *= -1;
        m=(x/10)%10;
        cout<<m<<endl;
    }
    return 0;
}
