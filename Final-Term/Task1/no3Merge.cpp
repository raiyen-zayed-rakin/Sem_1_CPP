#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     string s1, s2;

    cout<<"Enter first text : ";
    getline(cin,s1);
    cout<<"Enter second text : ";
    getline(cin,s2);

    string s3 = s1 + s2;
    cout<<endl<<endl;
    cout<<"Result : "<<s3<<endl;
    return 0;
}


