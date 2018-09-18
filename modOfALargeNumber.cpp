#include<bits/stdc++.h>
using namespace std;

int mod(string num,int x){
    int result =0;
    int len = num.length();
    for(int i=0;i<len;i++){
        int temp = num[i]-'0';
        result = ((result*10)%x+temp%x)%x;
    }
    return result;
}

int main()
{
    string inputNumber;
    int modNumber;

    while(cin>>inputNumber>>modNumber){
        cout<<mod(inputNumber,modNumber)<<endl;
    }
}
