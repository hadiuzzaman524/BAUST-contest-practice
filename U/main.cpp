#include <iostream>

using namespace std;

int main()
{ //freopen("input.txt","r",stdin);
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
      int a,b,c;
      cin>>a>>b>>c;
      if((a<b+c)&&(b<a+c)&&(c<a+b))
      {
          cout<<"OK"<<endl;
      }
      else
      {
          cout<<"Wrong!!"<<endl;
      }
  }
    return 0;
}
