#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,vector <int> > mp;
    //set<map<int,int>> set;

    vector<int> temp;
    temp.push_back(1);
    temp.push_back(3);
    mp[10] = temp;

    cout<<temp.size()<<endl;

    map<int, vector<int>>::iterator it;
    vector<int>:: iterator it2;

    for(it = mp.begin();it != mp.end();it++){
        for(it2 = it->second.begin();it2!=it->second.end();++it2){
            cout<<it->first<<"\t"<<*it2<<endl;
        }
    }



}
