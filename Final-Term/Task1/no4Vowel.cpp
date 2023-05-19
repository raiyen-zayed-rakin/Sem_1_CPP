
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string a;
    cout<<"Enter a text : "<<endl;
    getline(cin,a);

    int counter = 0;

    for(int i = 0; i<=a.length(); i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            counter++;
        }
    }

    cout<<endl<<endl;
    cout<<"Vowels appeared "<<counter<<" times."<<endl;
    return 0;
}
