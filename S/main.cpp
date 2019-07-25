#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
        {
            cout<<"Case "<<++i<<": good"<<endl;
        }
        else
        {
             cout<<"Case "<<++i<<": bad"<<endl;
        }
    }
    return 0;
}
