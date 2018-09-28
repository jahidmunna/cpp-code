#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num){
    int rev = 0;
   while(num>0){
        int x = num%10;
        rev = rev*10+x;
        num = num/10;
   }
   return rev;
}

string reverseString(string str){
    string rev = "";
    for(int i=str.length()-1; i>=0; i--){
            rev += str[i];
    }
    return rev;
}
int main()
{
    int number = 1005;
    cout<<reverseNumber(number)<<endl;

    string str = "1005";
    stringstream ss;
    string s = reverseString(str);
    ss<<s;
    int temp;
    ss>>temp;
    cout<<temp+1<<endl;
}
