#include<iostream>

using namespace std;

int main()
{
    long int test,a,b,c,count;
    cin>>test;
    count=1;
    while(test--)
    {
        cin>>a>>b>>c;
        cout<<"Case "<<count++<<": ";
        if(a+b>c && a+c>b && b+c>a)
        {
            if(a==b && b==c)
                cout<<"Equilateral"<<endl;
            else if(a==b || b==c || c==a)
                cout<<"Isosceles"<<endl;
            else
                cout<<"Scalene"<<endl;
        }
        else
            cout<<"Invalid"<<endl;
    }
    return 0;
}
