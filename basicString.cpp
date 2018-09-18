#include<bits/stdc++.h>
using namespace std;

string removeChar( string str, char remove, int &len)
{
    for(string::iterator it = str.begin(); it!=str.end();){
      if( (*it) == remove )
         it = str.erase( it );
      else
         it++;
   }

   len = str.length();
   return str;
}

int main(){
   string str = "Whatever here";
  // cout << removeChar(str,'W') << endl;

  char c = '"';
  //  cout<<c<<endl;

  int len = str.length();
  cout<<len<<endl;

  str = removeChar(str,'W',len);
  cout<<len<<endl;

   return 0;
}

