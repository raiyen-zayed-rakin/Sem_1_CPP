#include<iostream>
#include<math.h>
using namespace std;

int main(){
char c;
cout<<"Enter a Character: "<<endl;
cin>>c;

if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
{
    cout<<"Vowel."<<endl;
}
else
{
    cout<<"Consonant."<<endl;
}
// it is mandatory to use else when using else if.




return 0;
}
