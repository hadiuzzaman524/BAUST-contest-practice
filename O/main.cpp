#include <iostream>

using namespace std;

int main()
{
    int t,low,high;
    cin>>t;
    int j=0;
    while(t--)
    {
        cin>>low>>high;
        int sum=0;
        for(int i=low; i<=high; i++)
        {
            if(i%2 !=0)
                sum=sum+i;
        }
        cout<<"Case "<<++j<<": "<<sum<<endl;
    }
    return 0;
}
