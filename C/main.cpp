#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char input[100001];
    int p=0,len;
    while(gets(input))
    {
        len=strlen(input);
        for(int i=0; i<len; i++)
        {

            if(input[i]=='"')
            {  p++;
                if(p%2!=0)
                {
                    printf("``");
                }
                else
                {
                    printf("''");
                }
            }
            else
            {
                printf("%c",input[i]);
            }
        }
        printf("\n");

    }
    return 0;
}
