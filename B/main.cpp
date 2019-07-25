#include <iostream>
#include <stdio.h>

int main()
{
   int t,m;
   scanf("%d",&t);
   for(int i=1;i<=t;i++)
   {

       scanf("%d",&m);
       if(m>10)
       {
           printf("%d %d\n",m-10,m-(m-10));
       }
       else
       {
           printf("0 %d\n",m);
       }

   }
    return 0;
}
