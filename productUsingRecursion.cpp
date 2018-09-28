#include<bits/stdc++.h>
using namespace std;

int prod(int x,int n)
{
    if (n==0)
        return 0;
    else if(n==1)
        return x;
    else
        return x+prod(x,n-1);
}

int main()
{
    cout<<prod(5,10);

}
