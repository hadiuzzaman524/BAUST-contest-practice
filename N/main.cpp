#include <iostream>
#include <stdio.h>
using namespace std;
int GCD(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return GCD(b,a%b);
}
int main()
{
    int N;
    while(scanf("%d",&N)==1)
    {
        if(N==0)
            break;
        int G=0;
        for(int i=1; i<N; i++)
            for(int j=i+1; j<=N; j++)
            {
                G+=GCD(i,j);
            }
        cout<<G<<endl;
    }

    return 0;
}
