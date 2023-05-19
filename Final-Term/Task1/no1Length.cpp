#include<iostream>
#include<string.h>


using namespace std;

int main()
{
    int counter;
    string text;
    cout<<"Enter your text : ";

    getline(cin,text);  //can't proceed without getline and string

    counter = text.length();
    cout<<"Length of string is "<<counter<<endl;
    return 0;
}

