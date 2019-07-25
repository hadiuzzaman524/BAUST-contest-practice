#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
   int velocity,time;
   while(scanf("%d %d",&velocity,&time)==2)
   {
       int d=velocity*time;
       cout<<2*d<<endl;
   }
    return 0;
}
