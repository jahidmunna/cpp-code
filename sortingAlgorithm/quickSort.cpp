#include<bits/stdc++.h>
using namespace std;

void print(vector <int> arr){
    int len = arr.size();
    for(int i=0; i<len; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partitonArray(vector <int> & arr, int left, int right){
    int pivot = arr[right];
    int lastLargeNumberIndex = left, indexCounter = left;

    while(indexCounter<right){
        if(arr[indexCounter]<= pivot){
            swap(arr[indexCounter],arr[lastLargeNumberIndex]);
            lastLargeNumberIndex++;
        }
        indexCounter++;
    }
    swap(arr[right],arr[lastLargeNumberIndex]);

    return lastLargeNumberIndex;
}

void quickSort(vector <int> & arr, int left,  int right){
    if(left<right){
        int partitionIndex = partitonArray(arr,left,right);
        quickSort(arr, left, partitionIndex-1);
        quickSort(arr,partitionIndex+1,right);
    }
}

int main(){
    vector <int> arr = {2,5,8,7,4,1,3,9};

    cout<<"Before Sorting: \n";
    print(arr);

    quickSort(arr,0,arr.size()-1);

    cout<<"After Sorting: \n";
    print(arr);

}

