#include<bits/stdc++.h>
using namespace std;

void print(vector <int> arr){
    int len = arr.size();
    for(int i=0; i<len; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void marge(vector<int> &arr, int left, int middle, int right){
    vector<int> leftArray, rightArray;

    for(int i=left; i<=middle; i++){
        int temp = arr[i];
        leftArray.push_back(temp);
    }
    leftArray.push_back(INFINITY);

    for(int i=middle+1; i<=right; i++){
        int temp = arr[i];
        rightArray.push_back(temp);
    }
    rightArray.push_back(INFINITY);

    int leftArrayIndexCount=0,rightArrayIndexCount=0,totalIndexCount=left;

    while(totalIndexCount<=right){
        if(leftArray[leftArrayIndexCount]<=rightArray[rightArrayIndexCount]){
            arr[totalIndexCount] = leftArray[leftArrayIndexCount];
            leftArrayIndexCount++;
        }
        else{
            arr[totalIndexCount] = rightArray[rightArrayIndexCount];
            rightArrayIndexCount++;
        }
        totalIndexCount++;
    }

}

void margeSort(vector <int> & arr, int left,  int right){
    if(left<right){
        int middle = (left+right)/2;
        margeSort(arr, left, middle);
        margeSort(arr,middle+1,right);
        marge(arr, left, middle, right);
    }
}

int main(){
    vector <int> arr = {2,5,8,7,4,1,3,9};

    cout<<"Before Sorting: \n";
    print(arr);

    margeSort(arr,0,arr.size()-1);

    cout<<"After Sorting: \n";
    print(arr);

}
