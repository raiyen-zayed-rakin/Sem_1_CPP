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

    if(s1 == s2){
        cout<<"Same."<<endl;
    }
    else{
        cout<<"Not same."<<endl;
    }
    return 0;
}


