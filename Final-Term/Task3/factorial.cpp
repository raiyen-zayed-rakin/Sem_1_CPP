#include<iostream>
using namespace std;

int factorial(int a);

int main(){
cout<<"Enter a number for factorial : "<<endl;

int x;
cin>>x;

cout<<"Factorial of the number : "<<factorial(x);

return 0;
}
int factorial(int a){
    int ans = 1;
    for(int i=1; i<=a; i++){
        ans = ans*i;
    }
    return ans;
}
