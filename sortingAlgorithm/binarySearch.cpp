#include<bits/stdc++.h>
using namespace std;

void print(vector <int> arr){
    int len = arr.size();
    for(int i=0; i<len; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

bool search(vector<int> arr, int value, int left, int right){
    if(left<right){
        int middle = (left+right) / 2;
        int middleValue = arr[middle];
        if( middleValue == value)
            return true;

        else if(middleValue<value){
            search(arr, value, middle+1, right);
        }
        else {
            search(arr, value, left, middle-1);
        }
    }

    return false;
}

bool binarySearch(vector<int> arr, int value){
    return search(arr,value,0,arr.size()-1);
}

int main()
{
    vector <int> arr = {2,5,8,7,4,1,3,9,6};
    sort(arr.begin(),arr.begin()+arr.size());
    cout<<"After Sorting (Ascending): \n";
    print(arr);

    int findNumber = 5;
    cout<<"Finding "<<findNumber<<"  : "<<binarySearch(arr,findNumber)<<endl;
}
