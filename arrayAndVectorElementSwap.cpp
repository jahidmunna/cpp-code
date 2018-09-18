#include<bits/stdc++.h>
using namespace std;

void swapInt(int arr[])
{
    int temp = arr[0];
    arr[0]=arr[1];
    arr[1]=temp;

}

void swapIntV2(vector <int> &arr)
{
    int temp = arr[0];
    arr[0]=arr[1];
    arr[1]=temp;

}

int main()
{
    int a =5;
    int b=6;
    vector<int> arr = {a,b};
    swapIntV2(arr);
    a = arr[0];
    b = arr [1];

    cout<<a<<endl;
    cout<<b<<endl;

}

