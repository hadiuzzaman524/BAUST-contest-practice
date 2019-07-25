#include <iostream>
#include <stdio.h>
using namespace std;
double convertF(double c)
{
    return (c*9.0/5.0+32);
}
double convertC(double F)
{
    return (F-32)*5.0/9.0;
}
int main()
{
    int t;
    cin>>t;
    int i=0;
    while(t--)
    {
        double c,d,Celsius,Farenheit;

        scanf("%lf %lf",&c,&d);
        Farenheit=convertF(c)+d;
        Celsius= convertC(Farenheit);
        printf("Case %d: %.2f\n",++i,Celsius);


    }

    return 0;
}
