#include<bits/stdc++.h>
using namespace std;
vector<int> arr = {0};
int countItem=0;

//we will print the heap from the very beginning
void printHeap()
{
   // int len = arr.size();
    for(int i=1;i<=countItem;i++)
    {
        cout<<arr[i]<<"\t"; //the heap is basically the array. so, the element of the array is the actual heap element.
    }
    cout<<endl;
}


//the value is inserted in the bottom and that's why it needs to be adjusted from bottom to top0
void adjustHeapFromButtom()
{
    int itemIndex = countItem; //initially itemIndex is the last element index number.
    int item = arr[itemIndex]; //using index number we put the given value in item variable
    int parentIndex = countItem/2; //parentIndex is on 1/2 th index of current item.
    int parentItem = arr[parentIndex]; // using index number we put the parent value in parentItem variable
    //we have to adjust until the currentItem is greater than the parentItem and have to make sure that parentIndex is not null
    while(item>parentItem && parentIndex>=1)
    {
        //swap current item and parent item
        arr[parentIndex] = item; //first we put the current item in parentIndex;
        arr[itemIndex]=parentItem;//then we just put the parent item in the  current item index

        itemIndex = parentIndex; //after that new index of current item will be the parentIndex;
        parentIndex = parentIndex/2; // And the parent index will be the 1/2 of current parentIndex;
        parentItem = arr[parentIndex]; //parentItem will be the value of of array's parent index value
    }
}

void insertValue(int value)
{
    countItem++; // countItem tracks the total number of elements of the heap currently available
    arr.push_back(value); //we first simply put the value in the last index of the array
    adjustHeapFromButtom(); //then we just adjust the heap from the bottom
}


void adjustHeapFromTheTop(int parentIndex)
{
    int leftChildIndex = 2*parentIndex;
    int rightChildIndex = 2*parentIndex+1;

    int leftChild = arr[leftChildIndex];
    int rightChild = arr[2*rightChildIndex];

    int parent = arr[parentIndex];

    if(parent<leftChild || parent<rightChild)
    {

        if(leftChild>rightChild)
        {
            arr[parentIndex] = leftChild;
            arr[2*parentIndex] = parent;
            adjustHeapFromTheTop()
        }
    }


}

void removeValue()
{
    //to remove any value first we need to check whether there exists any elements of not.
    if(countItem>=2)
    {
        //if item is
        int parent = arr[0];
        int child = arr[countItem];
        arr[0]=child;
        countItem--;
        arr.erase(arr.size()-1);
        adjustHeapFromTheTop();
    }
    else if(countItem<2)
    {
        //if there exists only one element then we don't need to swap any value. in this case we just simply can delete the root element;
        if(countItem==1)
        {
            countItem--;
            arr.erase(arr.size()-1);
        }
        // less than one element means no item is on the heap.
        else
        {
            cout<<"invalid operation!!\n there is no element in the heap"<<endl;
        }

    }

}


int main()
{
    vector<int>values = {50,30,5,100};
    for(int i=0;i<values.size();i++)
        insertValue(values[i]);

    printHeap();
}



