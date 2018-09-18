#include<bits/stdc++.h>
using namespace std;

int size = 1;
int top = -1;
int *arr = new int [size];

void insertIntoArray(int x)
{
    if(top>size-1) //means capacity full
    {
        cout<<"top ="<<top<<"\tsize ="<<size<<endl;
        int *newArr = new int [size*2]; //new double sized array
        for(int i=0;i<top;i++)
        {
            newArr[i] = arr[i]; //copy all the values into new array
        }
        size = size*2; //make the size double
        delete[] arr;  // delete previous array
        arr = newArr; // make the new array to previous array
    }

    top++;
    arr[top]=x;
    cout<<"Inserted into "<<top<<" value = "<<arr[top]<<endl;

}

int main()
{
    insertIntoArray(10);
    insertIntoArray(20);
    insertIntoArray(30);
    insertIntoArray(40);
    insertIntoArray(50);
    insertIntoArray(60);
    insertIntoArray(70);
    insertIntoArray(80);
    insertIntoArray(90);
    insertIntoArray(100);

}
