#include<bits/stdc++.h>
using namespace std;

void staticAllocation()
{
    int val;
    cin>>val;

    int arr[val];
    int sum =0;

    for(int i=0;i<val;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"\nsum = "<<sum<<endl;
}


void dynamicAllocation()
{
    int val;
    cin>>val;
    int *arr = new int [val];
    //arr = new int [val];
    int sum = 0;
    for(int i=0;i<val;i++)
    {
        /*
        cin>>*(arr+i);
        sum+=*(arr+i);
        */
        //or
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i=0;i<val;i++)
    {
        static int count = 1;
        cout<<count<<"\t"<<arr[i]<<endl;
        count++;
    }
    cout<<"\nsum = "<<sum<<endl;

}


int main()
{
    dynamicAllocation();

}
