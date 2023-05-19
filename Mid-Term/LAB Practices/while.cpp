#include<iostream>

using namespace std;

int main(){
int n, right_digit;
cin>>n;

while(n!=0)
{
    right_digit=n%10;
    cout<<right_digit;
    n=n/10;
}

return 0;
}
