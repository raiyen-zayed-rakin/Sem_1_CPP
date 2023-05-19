#include<iostream>
using namespace std;

int main(){

    int x,y=10;
    x=5; // 101
    cout<<"Value of X : "<<x<<endl;
    cout<<"Address of X : "<<&x<<endl;
    cout<<"Address of Y : "<<&y<<endl;

    //if we want save address of integer type of data
    //we will need integer type of pointer.

    int *ax;
    ax=&x;

    int *ay;
    ay=&y;

   // int *p;
   // p= NULL; // NULL and 0 is not same thing.
    cout<<"Address of X : "<<ax<<endl;
    cout<<"Address of Y : "<<ay<<endl;
    cout<<"Value of X : "<<*ax<<endl;//5
    cout<<"Value of y : "<<*ay<<endl;//10
    cout<<"Address of ay : "<<&ay<<endl;
     cout<<"Address of ax : "<<&ax<<endl;

    *ax = 20;//x=20
    *(ax-1)=30;//y=30
    *(ay+1)=0;//x=0
    cout<<"Value of X : "<<x<<endl;
    cout<<"Value of Y : "<<y<<endl;

    /*int size;
    cin>>size;
    int *arr = new int [size];//dynamic array declaration
    arr[20] = 20;
    cout<<arr[20]<<endl;

    delete arr;*/


    return 0;
}
