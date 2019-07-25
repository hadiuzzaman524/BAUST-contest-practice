#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    cin.ignore();
    char ch[105];
    int j=0;
    while(testcase--)
    {
        gets(ch);
        int sum=0;
        for(int i=0;i<strlen(ch);i++)
        {  int p=0;
            if(ch[i]=='a'||ch[i]=='d'||ch[i]=='g'||ch[i]=='j'||ch[i]=='m'||ch[i]=='p'||ch[i]=='t'||ch[i]=='w'||ch[i]==32)
            {
                p=1;
                sum=sum+p;
            }
            else if(ch[i]=='b'||ch[i]=='e'||ch[i]=='h'||ch[i]=='k'||ch[i]=='n'||ch[i]=='q'||ch[i]=='u'||ch[i]=='x')
            {
                p=2;
                sum=sum+p;
            }
            else if(ch[i]=='c'||ch[i]=='f'||ch[i]=='i'||ch[i]=='l'||ch[i]=='o'||ch[i]=='r'||ch[i]=='v'||ch[i]=='y')
            {
                p=3;
                sum=sum+3;
            }
            else if(ch[i]=='s'||ch[i]=='z')
            {
                p=4;
                sum=sum+4;
            }
        }
        cout<<"Case #"<<++j<<": "<<sum<<endl;
    }
    return 0;
}
