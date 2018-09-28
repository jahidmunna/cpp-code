#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <double> arr= {2.9,2.4,2.9,3.8,5.7,1.0};


  //  map<double,int> mp;
    multimap<double,int>multimp;
    // makePair;

    for(int i=0;i<arr.size();i++)
    {
        double key = arr[i];
    //    mp[key] = i;
        multimp.insert(pair<double,int>(key,i));
//        multimp[key] = i;
    }


    multimap<double,int>::iterator it;
   // int k=4;
    int i=0;
    for(it=multimp.begin(); it!=multimp.end();++it)
    {
        cout<<it->first<<"\t"<<it->second<<endl;
        i++;
    }


}
