#include<bits/stdc++.h>
using namespace std;

void increament(int *a)
{
    ++*a;
}

void swapInt(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int arr [] = {1,2,3,4,5,6};
    int *p1 = &arr[0];

    for(int i=0;i<6;i++)
    {
        cout<<*(p1+i)<<endl;
    }
    /*
    char c = 'b';
    char *p = &c;
    cout<<p<<endl;
    cout<<*p<<endl;

    /*
    int a = 10;
    int *p = &a;
    int **q = &p;
    a = 20;
    cout<<"a(address) = "<<&a<<" value = "<<a<<endl;
    cout<<"p(address) = "<<&p<<" value = "<<p<<" pointer value = "<<*p<<endl;
    cout<<"q(address) = "<<&q<<" value = "<<q<<" pointer value = "<<*q<<" double pointer value = "<<**q<<endl;
    //cout<<q<<endl;

    /*
    int a = 10;
    int b = 20;
    swapInt(&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;

    /*
    int z = 10;
    int *ptr = &z;
    //ptr = &z;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    /*
    int x = 10;
    increament(&x);
    cout<<x<<endl;

    /*
    int a =50;
    int b = 10;
    int *p,*q;
    p=&a;
    q=&b;
    p=q;
    *q = 20;

    cout<<"p (address)= "<<p<<"\t(value) = "<<*p<<endl;
    cout<<"q (address)= "<<q<<"\t(value) = "<<*q<<endl;
    */
}
