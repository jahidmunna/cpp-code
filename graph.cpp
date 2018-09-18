#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int numberOfNode = 4;
    vector <int> adjMatrix [numberOfNode];
    adjMatrix[0].pb(1);
    adjMatrix[0].pb(2);
    adjMatrix[1].pb(0);
    adjMatrix[1].pb(3);
    adjMatrix[2].pb(0);
    adjMatrix[2].pb(3);

    for(int i=0; i<numberOfNode; i++){
        for(int j=0;j<adjMatrix[i].size();j++)
        {
            cout<<"Node: "<<i<<" Edge: "<<adjMatrix[i][j]<<endl;
        }
    }
}
