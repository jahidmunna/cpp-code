#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > examples;

int main()
{
    /*insert into the vector */
    for(int i=0;i<=4;i++){
        vector<int> temp;
        for(int j=0;j<=4;j++){
            temp.push_back(i);
        }
        //temp vector is column data in examples i-th row
        examples.push_back(temp);
    }

    /*showing the result */
    for(int i=0;i<=4;i++){
        for(int j=0;j<=4;j++){
            cout<<examples[i][j]<<"\t";
        }
        cout<<endl;
    }
}
