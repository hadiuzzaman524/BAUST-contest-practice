#include <iostream>

using namespace std;

int main()
{  //freopen("input.txt","r",stdin);
     int testcase;
    cin>>testcase;

    while(testcase--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=(b+c+d)&&b<=(a+c+d)&&c<=(a+b+d)&&d<=(a+b+c))
        {
            if(a==b && a==c && b==c && b==d && c==d)
            {
                cout<<"square"<<endl;
            }
            else if(a==b&&c==d||(a==c&&b==d)||(b==c&&a==d))
            {
                cout<<"rectangle"<<endl;
            }
            else
            {
                cout<< "quadrangle"<<endl;
            }

        }
        else
        {
            cout<<"banana"<<endl;
        }
    }

    return 0;
}
