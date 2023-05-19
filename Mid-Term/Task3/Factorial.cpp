#include <iostream>

using namespace std;

int main(){
int n;
cout<<"Enter a number for factorial :"<<endl;
cin>>n;
int fact=1;
for(int i=1; i<=n; i++){
    fact=fact*i;
}
cout<<"Factorial value is : 6"<<fact<<endl;

return 0;
}

