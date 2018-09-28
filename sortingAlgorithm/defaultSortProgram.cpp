#include<bits/stdc++.h>
using namespace std;

void print(vector <int> arr){
    int len = arr.size();
    for(int i=0; i<len; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void printArray( int arr [], int len){
    for(int i=0;i<len;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}


int main(){
    vector <int> arr = {2,5,8,7,4,1,3,9,6};

    cout<<"Before Sorting: \n";
    print(arr);

    //ascending
    sort(arr.begin(),arr.begin()+arr.size());
    cout<<"After Sorting (Ascending): \n";
    print(arr);

    //descending
    sort(arr.begin(),arr.begin()+arr.size(), greater<int>());
    cout<<"After Sorting (Descending): \n";
    print(arr);

    int arr2 [] = {10,2,4,2,1,3,8};
    int len = sizeof(arr2)/sizeof(arr2[0]);
    sort(arr2,arr2+len);
    printArray(arr2,len);
}
