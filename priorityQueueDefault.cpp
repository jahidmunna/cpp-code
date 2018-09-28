// C++ program to us priority_queue to implement min heap
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main ()
{
    // Creates a max heap
    priority_queue <int, vector<int>, greater<int> > minhip;
    priority_queue<int>maxhip;
    minhip.push(5);
    maxhip.push(5);
    minhip.push(1);
    maxhip.push(1);
    minhip.push(10);
    maxhip.push(10);
    minhip.push(30);
    maxhip.push(30);
    minhip.push(20);
    maxhip.push(20);

    // One by one extract items from max heap
    int numberOfElements = maxhip.size();
    cout<<"Size is: "<<numberOfElements<<endl;
    cout<<"Min hip"<<endl;
    while (minhip.empty() == false)
    {
        cout << minhip.top() << " ";
        minhip.pop();
    }

    cout<<"\nMax hip"<<endl;
    while(!maxhip.empty()){
        cout<<maxhip.top()<<" ";
        maxhip.pop();
    }


    return 0;
}
