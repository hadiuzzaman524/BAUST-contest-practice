#include <iostream>

using namespace std;

int main()
{
    int testc;
    cin>>testc;
    int m=0;
    while(testc--)
    {
        int value,reminder=0,wall;
        int low=0,high=0;
        cin>>wall;
        for(int i=0; i<wall; i++)
        {
            cin>>value;
            if(i==0)
                reminder=value;
            else
            {
                if(reminder<value)
                {
                    high++;
                    reminder=value;
                }
                else if(reminder>value)
                {
                    low++;
                    reminder=value;
                }
            }

        }
        cout<<"Case "<<++m<<": "<<high<< " "<<low<<endl;
    }


    return 0;
}
