#include<bits/stdc++.h>
using namespace std;

void printString(char *str)
{
    int l = strlen(str);

    for(int i=0;i<l;i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    char c[] ="I know what I want";
 //   gets(c);
    printString(c);
}
