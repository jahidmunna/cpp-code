#include<bits/stdc++.h>
using namespace std;

struct member{
    int id;
    string name;
};

int main()
{
    struct member individuals[4];


    for(int i=1; i<4;i++)
    {
        individuals[i].id = i;
        string temp;
        cin>>temp;
        individuals[i].name = temp;
    }


    for(int i=1; i<4;i++)
    {
        cout<<individuals[i].id<<"\t";
        cout<<individuals[i].name<<endl;
    }


}
