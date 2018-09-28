#include<bits/stdc++.h>
using namespace std;

bool exist(map<string,int> &mp, string key)
{
    if(mp.find(key) == mp.end()){
        return false;
    }
    return true;
}

int main()
{
    vector<string> city = {"dhaka","sylhet", "rajshahi","khulna","barishal","dhaka","sylhet","dhaka"};
    map<string, int> mp;

    for(int i=0;i<city.size();i++){
        if(exist(mp,city[i])){
            ++mp[city[i]];
        }
        else {
            mp[city[i]] = 1;
        }
    }

    map<string,int>::iterator it;

    for(it = mp.begin();it != mp.end(); it++){
        cout<<it->first<<"\t"<<it->second<<endl;
    }

}
