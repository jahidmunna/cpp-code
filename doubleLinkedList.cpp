#include<bits/stdc++.h>
using namespace std;

struct nodeType{
    nodeType *prev; //stores previous node address
    int data; //stores nodes data
    nodeType *next; //stores next node address
};
nodeType *head=NULL, *temp = NULL; //head points the initial node and temp points the last node;

void addToTheList(int value)
{
    nodeType *newNode = new nodeType; //makes new node to store the current data
    newNode->data = value; //store current value into the node

    if(head==NULL) //head null indicates the note is yet to build
    {
        head = newNode; //so current node will be the initial node of the list
        newNode->prev=NULL; //as no other node is added yet so previous and next node pointers points to the null
        newNode->next=NULL;
        temp = newNode; //temp tracks the last node

    }
    else
    {
        newNode->prev=temp; //last node address was stored in temp pointer
        temp->next=newNode; //current new node is the next node of previous node
        newNode->next=NULL; //next node is not yet added so it must point to the null
        temp=newNode; //new last node is the current node
    }
}


void printList()
{
    nodeType *travelNode = head; //checking from the very beginning node which is stored in the head pointer.

    while(travelNode!=NULL) //we will print until the last node which is pointed to the null
    {
        cout<<travelNode->data<<"\t";
        travelNode = travelNode->next; //after printing each node value we will go to the next node
    }
    cout<<endl;
}


void deleteValue(int value)
{
    /*  to delete a particular value we first need to find the node where the value is stored
        and to do that we have to check all the nodes from the beginning and it continues until
        the value is found or the last node is appeared
    */
    nodeType *travelNode = head; //let's start from the root node

    while(travelNode!=NULL) //we will stop if last node appears
    {
        if(travelNode->data==value) //trying to find the node where the node value matches the desired value
        {
            //if node is found and it is the first/initial node we just simply change the head pointer to the next node
            //and as it it double liked list so, you have to make the next node's previous pointer to point to the null
            if(head==travelNode)
            {
                head=travelNode->next;
                travelNode->next->prev = NULL;
            }

            //if it is note initial node we just put the previous node's next pointer to the current node's next and vise versa
            else
            {
                if(travelNode->next!=NULL)
                {
                    travelNode->prev->next=travelNode->next;
                    travelNode->next->prev=travelNode->prev;
                }

                //if value is in the last node we just simply make the previous node's pointer points to the null
                else
                {
                    travelNode->prev->next=NULL;

                }
            }

            delete travelNode; //after processing we don't need the node containing desired value anymore.
            cout<<"After deleting "<<value<<" new list is:"<<endl;
            printList();
            break; //we don't need to check any value further so we will stop checking
        }

        travelNode=travelNode->next; //if not found we need to check the next node
    }

}


int main()
{
    for(int i=10;i<=15;i++)
    {
        addToTheList(i);
    }

    printList();

    deleteValue(15);
}


