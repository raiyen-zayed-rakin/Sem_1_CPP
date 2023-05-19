#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string a;
    cout<<"Enter a text : ";
    getline(cin,a);

    for(int i = a.size(); i>=0; i--)
    {
        cout<<a[i];
    }
    return 0;
}

