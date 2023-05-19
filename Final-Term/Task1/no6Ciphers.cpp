#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    // NOTE: ata onekkhon test korte korte milse ma'am.
    //Without function
    string s1;
    int n;
    cout<<"Enter a string : ";
    getline(cin,s1);
    cout<<"Enter an integer : ";
    cin>>n;

    for(int i=n; i<s1.size(); i+=n){
         s1[i]+=2;
         i++;
    }
    cout<<"Converted String : "<<s1<<endl;

    return 0;
}



