#include<bits/stdc++.h>
using namespace std;


struct info
{
    string name;
    int age;
    float salary;
};


int main()
{

    info person[5];
    for(int i=0;i<5;i++)
    {
        cout<<i+1 <<"th Person's Name: ";
        cin>>person[i].name;
        cout<<i+1 <<"th Person's age: ";
        cin>> person[i].age;
        cout<<i+1 <<"th Person's salary: ";
        cin>> person[i].salary;

        cout<<endl;

    }

    for(int i=0;i<5;i++)
    {
        cout<<i+1 <<"th Person's Name: "<< person[i].name<<endl;
        cout<<i+1 <<"th Person's age: "<<person[i].age<<endl;
        cout<<i+1 <<"th Person's salary: "<<person[i].salary<<endl;

        cout<<endl;

    }

    return 0;
}
