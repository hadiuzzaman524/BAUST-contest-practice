#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    int i=0;
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        printf("Case %d: ",++i);
        if(a>b&&a<c||a>c&&a<b)
        {
            printf("%d\n",a);
        }
        else if(b>a&&b<c||b>c&&b<a)
        {
            printf("%d\n",b);
        }
        else
            printf("%d\n",c);



    }
    return 0;
}
