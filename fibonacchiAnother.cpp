#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int recSum(int x){
    if(x==1)
        return 1;
    else if(x==0)
        return 0;
    else
        return x+recSum(x-1);
}


ll fibo(int n, vector<ll> &fib){
    if(n==1 || n==2){
        fib[n]=1;
    }

    if(fib[n]!=-1)
        return fib[n];
    else
        fib[n] = fibo(n-1,fib)+fibo(n-2,fib);

        return fib[n];

}




ll fibo2(int n){
    if(n==1 || n==2)
        return 1;
    else
        return  fibo2(n-1)+fibo2(n-2);
}

int main()
{
    int x =1000 ;
    vector<ll>fib(x+1,-1);
  //  cout<<recSum(x)<<endl;

    cout<<fibo(x,fib)<<endl;
    cout<<fibo2(x)<<endl;
//
}
