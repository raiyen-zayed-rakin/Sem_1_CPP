#include<bits/stdc++.h>
using namespace std;

int main(){
    char choice;
do{
char op;
int v1,v2;
cout<<"Enter value 1: "<<endl;
cin>>v1;
cout<<"Enter value 2: "<<endl;
cin>>v2;
cout<<"Enter your operator: "<<endl;
cin>>op;

switch(op)
{
case '+':
    cout<<v1+v2<<endl;
    break;
case '-':
    cout<<v1-v2<<endl;
    break;
case '*':
    cout<<v1*v2<<endl;
    break;
case '/':
    cout<<v1/v2<<endl;
    break;
case '^':
    cout<<pow(v1,v2)<<endl;
    break;
case '%':
    cout<<v1%v2<<endl;
    break;
default:
    cout<<"Not Allowed"<<endl;
    break;
}

cout<<"Do you want try again?"<<endl;
cin>>choice;
}while(choice=='Y' || choice=='y');



return 0;
}
