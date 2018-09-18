#include<bits/stdc++.h>
using namespace std;

struct nodeType
{
    nodeType *left = NULL;
    int data;
    nodeType *right = NULL;
};

nodeType *root=NULL;

void insertIntoTree(int value,nodeType *tempRoot)
{
    if(value<tempRoot->data)
    {
        if(tempRoot->left==NULL)
        {
          //  cout<<value<<" is inserted into left of "<<tempRoot->data<<endl;
            tempRoot->left = new nodeType;
            tempRoot->left->data=value;
         //   tempRoot->left->left = NULL;
          //  tempRoot->left->right = NULL;
        }
        else
        {
            insertIntoTree(value,tempRoot->left);
        }
    }
    else
    {
        if(tempRoot->right==NULL)
        {
         //   cout<<value<<" is inserted into right of "<<tempRoot->data<<endl;
            tempRoot->right = new nodeType;
            tempRoot->right->data=value;
          //  tempRoot->right->left = NULL;
        }
        else
        {
            insertIntoTree(value,tempRoot->right);
        }

    }
}

void insertIntoBinaryTree(int value)
{
    if(root==NULL)
    {
       // cout<<value<<" is root node"<<endl;
        root = new nodeType;
        root->data = value;
     //   root->left=NULL;
     //   root->right=NULL;
    }
    else
    {
        insertIntoTree(value,root);
    }

}

void printInOrder(nodeType *tempRoot)
{
    if(tempRoot!=NULL)
    {
        printInOrder(tempRoot->left);
        cout<<tempRoot->data<<"\t";
        printInOrder(tempRoot->right);
    }
}

void printPreOrder(nodeType *tempRoot)
{
    if(tempRoot!=NULL)
    {
        cout<<tempRoot->data<<"\t";
        printPreOrder(tempRoot->left);
        printPreOrder(tempRoot->right);
    }
}

void printPostOrder(nodeType *tempRoot)
{
    if(tempRoot!=NULL)
    {
        printPostOrder(tempRoot->left);
        printPostOrder(tempRoot->right);
        cout<<tempRoot->data<<"\t";
    }
}

void printDecendingOrder(nodeType *tempRoot)
{
    if(tempRoot!=NULL)
    {
        printDecendingOrder(tempRoot->right);
        cout<<tempRoot->data<<"\t";
        printDecendingOrder(tempRoot->left);
    }
}

void printValue()
{
    cout<<"Print in ascending order:\t";
    printInOrder(root);
    cout<<endl;

    cout<<"Print in pre-Order:\t";
    printPreOrder(root);
    cout<<endl;

    cout<<"Print in post Order:\t";
    printPostOrder(root);
    cout<<endl;

    cout<<"Print in descending Order:\t";
    printDecendingOrder(root);
    cout<<endl;

}

bool searchInTree(int value,nodeType *node)
{
    if(node==NULL)
        return false;
    else if(value==node->data)
        return true;
    else if(value<node->data)
    {
        if(node->left==NULL)
            return false;
        else
            searchInTree(value,node->left);
    }
    else
    {
        if(node->right==NULL)
            return false;
        else
            searchInTree(value,node->right);

    }

}

bool searchValue(int value)
{
    return searchInTree(value,root);
}

void printSearch(int key)
{
    bool found = searchValue(key);
    if(found)
        cout<<key<<" is found"<<endl;
    else
        cout<<key<<" is not found"<<endl;
}

int main()
{
    vector<int >arr = {50,15,75,3,30,64,81,18,35,77,99};

    int len = arr.size();
    for(int i=0;i<len;i++)
    {
        insertIntoBinaryTree(arr[i]);
    }

    printValue();

   /*
   printSearch(10);
   printSearch(50);
   printSearch(90);
   printSearch(30);
   */
}
