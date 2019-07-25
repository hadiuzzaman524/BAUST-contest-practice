#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int h1,h2,m1,m2;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {  int minute,hour;
        if(h1==0&&h2==0&&m1==0&&m2==0)
            break;
        if(h1==0)
            h1=24;
        if(h2==0)
            h2=24;
        if(m1>m2)
        { m2=m2+60;
          minute=m2-m1;
            if(h1+1>h2)
                h2=h2+24;
            hour=h2-(h1+1);
        }
        else
        {
            if(h1>h2)
                h2=h2+24;
            hour=h2-h1;
            minute=m2-m1;
        }
        cout<<hour*60+minute<<endl;
    }
    return 0;
}
