#include<bits/stdc++.h>
using namespace std;

struct nodeType
{
    int data;
    nodeType *next; //it points the next node

};

nodeType *head = NULL, *temp = NULL; //head points the initial node and temp holds the previous node

void insertIntoLinkedList(int value)
{
    nodeType *newPtr = new nodeType; //new value requires new node to be inserted
    newPtr->data = value; //it holds the current data in the node
    newPtr->next = NULL; //it holds the next node's address. initially it is null as it is the last node so far

    if(head==NULL){  //head==null means no node is created so far.
        head=newPtr; //so current node will be pointed to the head node.
        temp=newPtr; //temp holds current nodes so that it can be used to get the previous node next time;
    }
    else{
        temp->next=newPtr;
        temp = newPtr;
    }
}

void printLinkedList()
{
    nodeType *travelNode = head; //to get the whole list we first need to know the initial node address that is pointed by the head node.

    while(travelNode!=NULL)
    {
        cout<<travelNode->data<<endl;
        travelNode = travelNode->next;
    }
}

int main()
{
    insertIntoLinkedList(5);
    insertIntoLinkedList(15);
    insertIntoLinkedList(25);
    insertIntoLinkedList(35);

    printLinkedList();

}
